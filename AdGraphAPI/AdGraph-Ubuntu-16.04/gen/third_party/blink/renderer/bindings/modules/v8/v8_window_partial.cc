// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_absolute_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_accelerometer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ambient_light_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_listener.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_processing_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_scheduled_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_assertion_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_attestation_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_fetch.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_barcode_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_battery_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_before_install_prompt_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_blob_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_characteristic_properties.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_characteristic.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_server.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_service.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_uuid.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_broadcast_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_service.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_capture_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_merger_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_splitter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clipboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constant_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credentials_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_database_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_delay_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_detected_barcode.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_detected_face.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_detected_text.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_orientation_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gain_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_button.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_haptic_actuator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gyroscope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor_with_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_factory.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_key_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer_changes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_open_db_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_iir_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_bitmap_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_capture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_input_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard_layout_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_linear_acceleration_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_magnetometer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_devices.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_element_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_encrypted_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_status_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_access.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_keys.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_metadata.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_recorder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_settings_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_access.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_input.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_input_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_completion_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_overconstrained_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_password_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_address.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instruments.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request_update_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_status.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_photo_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_picture_in_picture_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_availability.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_available_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_relative_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_remote_playback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_tone_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_ice_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_contributing_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_stats_report.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_track_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_orientation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_script_processor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor_error_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_utterance.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_stereo_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_track_default.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_track_default_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_alternate_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_endpoint.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_playback_quality.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_eye_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_frame_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_stage_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_transform_feedback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_websocket.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worklet_animation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_coordinate_system.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_device_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_frame_of_reference.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_layer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_frame.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_stage_bounds.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_stage_bounds_point.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_viewport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_webgl_layer.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/modules/animationworklet/window_animation_worklet.h"
#include "third_party/blink/renderer/modules/app_banner/dom_window_installation.h"
#include "third_party/blink/renderer/modules/cache_storage/global_cache_storage.h"
#include "third_party/blink/renderer/modules/cookie_store/global_cookie_store.h"
#include "third_party/blink/renderer/modules/crypto/dom_window_crypto.h"
#include "third_party/blink/renderer/modules/device_orientation/dom_window_device_motion.h"
#include "third_party/blink/renderer/modules/device_orientation/dom_window_device_orientation.h"
#include "third_party/blink/renderer/modules/filesystem/dom_window_file_system.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
#include "third_party/blink/renderer/modules/mediastream/dom_window_media_stream.h"
#include "third_party/blink/renderer/modules/quota/dom_window_quota.h"
#include "third_party/blink/renderer/modules/speech/dom_window_speech.h"
#include "third_party/blink/renderer/modules/speech/dom_window_speech_synthesis.h"
#include "third_party/blink/renderer/modules/storage/dom_window_storage.h"
#include "third_party/blink/renderer/modules/webdatabase/dom_window_web_database.h"
#include "third_party/blink/renderer/modules/window_modules_constructors.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace DOMWindowPartialV8Internal {

static void animationWorkletAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  Worklet* cppValue(WindowAnimationWorklet::animationWorklet(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#animationWorklet")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void onappinstalledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowInstallation::onappinstalled(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onappinstalledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowInstallation::setOnappinstalled(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onbeforeinstallpromptAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowInstallation::onbeforeinstallprompt(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onbeforeinstallpromptAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowInstallation::setOnbeforeinstallprompt(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void cachesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Window", "caches");

  CacheStorage* cppValue(GlobalCacheStorage::caches(*impl, exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#caches")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void cookieStoreAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  CookieStore* cppValue(GlobalCookieStore::cookieStore(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#cookieStore")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void cookieStoreAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> propertyName = V8AtomicString(isolate, "cookieStore");
  V8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void cryptoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  Crypto* cppValue(DOMWindowCrypto::crypto(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#crypto")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void ondevicemotionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowDeviceMotion::ondevicemotion(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondevicemotionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowDeviceMotion::setOndevicemotion(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondeviceorientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowDeviceOrientation::ondeviceorientation(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondeviceorientationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowDeviceOrientation::setOndeviceorientation(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondeviceorientationabsoluteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  EventListener* cppValue(DOMWindowDeviceOrientation::ondeviceorientationabsolute(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondeviceorientationabsoluteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowDeviceOrientation::setOndeviceorientationabsolute(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void indexedDBAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  IDBFactory* cppValue(GlobalIndexedDB::indexedDB(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#indexedDB")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void webkitStorageInfoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  DeprecatedStorageInfo* cppValue(DOMWindowQuota::webkitStorageInfo(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#webkitStorageInfo")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void speechSynthesisAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  SpeechSynthesis* cppValue(DOMWindowSpeechSynthesis::speechSynthesis(scriptState, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#speechSynthesis")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void sessionStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Window", "sessionStorage");

  Storage* cppValue(DOMWindowStorage::sessionStorage(*impl, exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#sessionStorage")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void localStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(holder));

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Window", "localStorage");

  Storage* cppValue(DOMWindowStorage::localStorage(*impl, exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#localStorage")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void webkitRequestFileSystemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitRequestFileSystem");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint16_t type;
  int64_t size;
  V8FileSystemCallback* successCallback;
  V8ErrorCallback* errorCallback;
  type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (info[2]->IsObject()) {
    successCallback = V8FileSystemCallback::Create(info[2].As<v8::Object>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  if (info[3]->IsObject()) {
    errorCallback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 4 is not an object.");
    return;
  }

  DOMWindowFileSystem::webkitRequestFileSystem(*impl, type, size, successCallback, errorCallback);
}

static void webkitResolveLocalFileSystemURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitResolveLocalFileSystemURL");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> url;
  V8EntryCallback* successCallback;
  V8ErrorCallback* errorCallback;
  url = info[0];
  if (!url.Prepare())
    return;

  if (info[1]->IsObject()) {
    successCallback = V8EntryCallback::Create(info[1].As<v8::Object>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not an object.");
    return;
  }

  if (info[2]->IsObject()) {
    errorCallback = V8ErrorCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  DOMWindowFileSystem::webkitResolveLocalFileSystemURL(*impl, url, successCallback, errorCallback);
}

static void openDatabaseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "openDatabase");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = ToLocalDOMWindow(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  V8StringResource<> name;
  V8StringResource<> version;
  V8StringResource<> displayName;
  uint32_t estimatedSize;
  V8DatabaseCallback* creationCallback;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  name = info[0];
  if (!name.Prepare())
    return;

  version = info[1];
  if (!version.Prepare())
    return;

  displayName = info[2];
  if (!displayName.Prepare())
    return;

  estimatedSize = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 4)) {
    Database* result = DOMWindowWebDatabase::openDatabase(*impl, name, version, displayName, estimatedSize, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  if (info[4]->IsFunction()) {
    creationCallback = V8DatabaseCallback::Create(info[4].As<v8::Function>());
  } else if (info[4]->IsNullOrUndefined()) {
    creationCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 5 is not a function.");
    return;
  }

  Database* result = DOMWindowWebDatabase::openDatabase(*impl, name, version, displayName, estimatedSize, creationCallback, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

} // namespace DOMWindowPartialV8Internal

void V8WindowPartial::WorkletAnimationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WorkletAnimation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WorkletAnimation::wrapperTypeInfo);
}

void V8WindowPartial::BudgetStateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BudgetState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BudgetState::wrapperTypeInfo);
}

void V8WindowPartial::GamepadPoseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8GamepadPose::wrapperTypeInfo);
}

void V8WindowPartial::MediaCapabilitiesInfoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaCapabilitiesInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaCapabilitiesInfo::wrapperTypeInfo);
}

void V8WindowPartial::PictureInPictureWindowConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PictureInPictureWindow_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PictureInPictureWindow::wrapperTypeInfo);
}

void V8WindowPartial::AbsoluteOrientationSensorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AbsoluteOrientationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AbsoluteOrientationSensor::wrapperTypeInfo);
}

void V8WindowPartial::AccelerometerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Accelerometer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Accelerometer::wrapperTypeInfo);
}

void V8WindowPartial::GyroscopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Gyroscope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Gyroscope::wrapperTypeInfo);
}

void V8WindowPartial::LinearAccelerationSensorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_LinearAccelerationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LinearAccelerationSensor::wrapperTypeInfo);
}

void V8WindowPartial::OrientationSensorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OrientationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OrientationSensor::wrapperTypeInfo);
}

void V8WindowPartial::RelativeOrientationSensorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RelativeOrientationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RelativeOrientationSensor::wrapperTypeInfo);
}

void V8WindowPartial::SensorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Sensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Sensor::wrapperTypeInfo);
}

void V8WindowPartial::SensorErrorEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SensorErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SensorErrorEvent::wrapperTypeInfo);
}

void V8WindowPartial::LockConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Lock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Lock::wrapperTypeInfo);
}

void V8WindowPartial::LockManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_LockManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LockManager::wrapperTypeInfo);
}

void V8WindowPartial::VRDisplayCapabilitiesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRDisplayCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VRDisplayCapabilities::wrapperTypeInfo);
}

void V8WindowPartial::VRDisplayConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRDisplay_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VRDisplay::wrapperTypeInfo);
}

void V8WindowPartial::VRDisplayEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRDisplayEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VRDisplayEvent::wrapperTypeInfo);
}

void V8WindowPartial::VREyeParametersConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VREyeParameters_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VREyeParameters::wrapperTypeInfo);
}

void V8WindowPartial::VRFrameDataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRFrameData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VRFrameData::wrapperTypeInfo);
}

void V8WindowPartial::VRPoseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VRPose::wrapperTypeInfo);
}

void V8WindowPartial::VRStageParametersConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRStageParameters_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VRStageParameters::wrapperTypeInfo);
}

void V8WindowPartial::XRConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XR_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XR::wrapperTypeInfo);
}

void V8WindowPartial::XRCoordinateSystemConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRCoordinateSystem_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRCoordinateSystem::wrapperTypeInfo);
}

void V8WindowPartial::XRDeviceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRDevice::wrapperTypeInfo);
}

void V8WindowPartial::XRDevicePoseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRDevicePose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRDevicePose::wrapperTypeInfo);
}

void V8WindowPartial::XRFrameOfReferenceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRFrameOfReference_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRFrameOfReference::wrapperTypeInfo);
}

void V8WindowPartial::XRInputPoseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRInputPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRInputPose::wrapperTypeInfo);
}

void V8WindowPartial::XRInputSourceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRInputSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRInputSource::wrapperTypeInfo);
}

void V8WindowPartial::XRInputSourceEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRInputSourceEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRInputSourceEvent::wrapperTypeInfo);
}

void V8WindowPartial::XRLayerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRLayer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRLayer::wrapperTypeInfo);
}

void V8WindowPartial::XRPresentationContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRPresentationContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRPresentationContext::wrapperTypeInfo);
}

void V8WindowPartial::XRPresentationFrameConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRPresentationFrame_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRPresentationFrame::wrapperTypeInfo);
}

void V8WindowPartial::XRSessionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRSession_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRSession::wrapperTypeInfo);
}

void V8WindowPartial::XRSessionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRSessionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRSessionEvent::wrapperTypeInfo);
}

void V8WindowPartial::XRStageBoundsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRStageBounds_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRStageBounds::wrapperTypeInfo);
}

void V8WindowPartial::XRStageBoundsPointConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRStageBoundsPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRStageBoundsPoint::wrapperTypeInfo);
}

void V8WindowPartial::XRViewConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRView_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRView::wrapperTypeInfo);
}

void V8WindowPartial::XRViewportConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRViewport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRViewport::wrapperTypeInfo);
}

void V8WindowPartial::XRWebGLLayerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRWebGLLayer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XRWebGLLayer::wrapperTypeInfo);
}

void V8WindowPartial::CookieChangeEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CookieChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CookieChangeEvent::wrapperTypeInfo);
}

void V8WindowPartial::CookieStoreConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CookieStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CookieStore::wrapperTypeInfo);
}

void V8WindowPartial::BackgroundFetchFetchConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BackgroundFetchFetch_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BackgroundFetchFetch::wrapperTypeInfo);
}

void V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BackgroundFetchManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BackgroundFetchManager::wrapperTypeInfo);
}

void V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BackgroundFetchRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BackgroundFetchRegistration::wrapperTypeInfo);
}

void V8WindowPartial::BudgetServiceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BudgetService_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BudgetService::wrapperTypeInfo);
}

void V8WindowPartial::GamepadHapticActuatorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadHapticActuator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8GamepadHapticActuator::wrapperTypeInfo);
}

void V8WindowPartial::IDBObservationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObservation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObservation::wrapperTypeInfo);
}

void V8WindowPartial::IDBObserverChangesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObserverChanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObserverChanges::wrapperTypeInfo);
}

void V8WindowPartial::IDBObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObserver::wrapperTypeInfo);
}

void V8WindowPartial::KeyboardConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Keyboard_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Keyboard::wrapperTypeInfo);
}

void V8WindowPartial::KeyboardLayoutMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_KeyboardLayoutMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8KeyboardLayoutMap::wrapperTypeInfo);
}

void V8WindowPartial::MediaMetadataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaMetadata_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaMetadata::wrapperTypeInfo);
}

void V8WindowPartial::MediaSessionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaSession_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaSession::wrapperTypeInfo);
}

void V8WindowPartial::TrackDefaultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrackDefault_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrackDefault::wrapperTypeInfo);
}

void V8WindowPartial::TrackDefaultListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrackDefaultList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrackDefaultList::wrapperTypeInfo);
}

void V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VideoPlaybackQuality_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8VideoPlaybackQuality::wrapperTypeInfo);
}

void V8WindowPartial::NotificationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Notification_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Notification::wrapperTypeInfo);
}

void V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OffscreenCanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OffscreenCanvasRenderingContext2D::wrapperTypeInfo);
}

void V8WindowPartial::PaymentInstrumentsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentInstruments_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentInstruments::wrapperTypeInfo);
}

void V8WindowPartial::PaymentManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentManager::wrapperTypeInfo);
}

void V8WindowPartial::PaymentAddressConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentAddress_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentAddress::wrapperTypeInfo);
}

void V8WindowPartial::PaymentRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentRequest::wrapperTypeInfo);
}

void V8WindowPartial::PaymentResponseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentResponse::wrapperTypeInfo);
}

void V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentRequestUpdateEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentRequestUpdateEvent::wrapperTypeInfo);
}

void V8WindowPartial::PermissionStatusConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PermissionStatus_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PermissionStatus::wrapperTypeInfo);
}

void V8WindowPartial::PermissionsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Permissions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Permissions::wrapperTypeInfo);
}

void V8WindowPartial::PresentationAvailabilityConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationAvailability_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationAvailability::wrapperTypeInfo);
}

void V8WindowPartial::PresentationConnectionAvailableEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnectionAvailableEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationConnectionAvailableEvent::wrapperTypeInfo);
}

void V8WindowPartial::PresentationConnectionCloseEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnectionCloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationConnectionCloseEvent::wrapperTypeInfo);
}

void V8WindowPartial::PresentationConnectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationConnection::wrapperTypeInfo);
}

void V8WindowPartial::PresentationConnectionListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnectionList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationConnectionList::wrapperTypeInfo);
}

void V8WindowPartial::PresentationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Presentation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Presentation::wrapperTypeInfo);
}

void V8WindowPartial::PresentationReceiverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationReceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationReceiver::wrapperTypeInfo);
}

void V8WindowPartial::PresentationRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PresentationRequest::wrapperTypeInfo);
}

void V8WindowPartial::PushManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PushManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PushManager::wrapperTypeInfo);
}

void V8WindowPartial::PushSubscriptionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PushSubscription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PushSubscription::wrapperTypeInfo);
}

void V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PushSubscriptionOptions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PushSubscriptionOptions::wrapperTypeInfo);
}

void V8WindowPartial::RemotePlaybackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RemotePlayback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RemotePlayback::wrapperTypeInfo);
}

void V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SpeechSynthesisEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SpeechSynthesisEvent::wrapperTypeInfo);
}

void V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SpeechSynthesisUtterance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SpeechSynthesisUtterance::wrapperTypeInfo);
}

void V8WindowPartial::AmbientLightSensorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AmbientLightSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AmbientLightSensor::wrapperTypeInfo);
}

void V8WindowPartial::MagnetometerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Magnetometer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Magnetometer::wrapperTypeInfo);
}

void V8WindowPartial::BarcodeDetectorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BarcodeDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BarcodeDetector::wrapperTypeInfo);
}

void V8WindowPartial::DetectedBarcodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DetectedBarcode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DetectedBarcode::wrapperTypeInfo);
}

void V8WindowPartial::DetectedFaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DetectedFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DetectedFace::wrapperTypeInfo);
}

void V8WindowPartial::DetectedTextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DetectedText_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DetectedText::wrapperTypeInfo);
}

void V8WindowPartial::FaceDetectorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FaceDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FaceDetector::wrapperTypeInfo);
}

void V8WindowPartial::TextDetectorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextDetector::wrapperTypeInfo);
}

void V8WindowPartial::CanvasGradientConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasGradient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CanvasGradient::wrapperTypeInfo);
}

void V8WindowPartial::CanvasPatternConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasPattern_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CanvasPattern::wrapperTypeInfo);
}

void V8WindowPartial::Path2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Path2D::wrapperTypeInfo);
}

void V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGL2RenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGL2RenderingContext::wrapperTypeInfo);
}

void V8WindowPartial::WebGLRenderingContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLRenderingContext::wrapperTypeInfo);
}

void V8WindowPartial::AuthenticatorAssertionResponseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AuthenticatorAssertionResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AuthenticatorAssertionResponse::wrapperTypeInfo);
}

void V8WindowPartial::AuthenticatorAttestationResponseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AuthenticatorAttestationResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AuthenticatorAttestationResponse::wrapperTypeInfo);
}

void V8WindowPartial::AuthenticatorResponseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AuthenticatorResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AuthenticatorResponse::wrapperTypeInfo);
}

void V8WindowPartial::PublicKeyCredentialConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PublicKeyCredential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PublicKeyCredential::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothCharacteristicPropertiesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothCharacteristicProperties_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothCharacteristicProperties::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Bluetooth_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Bluetooth::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothDeviceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothDevice::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothRemoteGATTCharacteristicConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTCharacteristic_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothRemoteGATTCharacteristic::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothRemoteGATTDescriptorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTDescriptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothRemoteGATTDescriptor::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothRemoteGATTServerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTServer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothRemoteGATTServer::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothRemoteGATTServiceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTService_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothRemoteGATTService::wrapperTypeInfo);
}

void V8WindowPartial::BluetoothUUIDConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothUUID_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BluetoothUUID::wrapperTypeInfo);
}

void V8WindowPartial::NFCConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NFC_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NFC::wrapperTypeInfo);
}

void V8WindowPartial::USBConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USB_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USB::wrapperTypeInfo);
}

void V8WindowPartial::USBAlternateInterfaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBAlternateInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBAlternateInterface::wrapperTypeInfo);
}

void V8WindowPartial::USBConfigurationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBConfiguration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBConfiguration::wrapperTypeInfo);
}

void V8WindowPartial::USBConnectionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBConnectionEvent::wrapperTypeInfo);
}

void V8WindowPartial::USBDeviceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBDevice::wrapperTypeInfo);
}

void V8WindowPartial::USBEndpointConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBEndpoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBEndpoint::wrapperTypeInfo);
}

void V8WindowPartial::USBInTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBInTransferResult::wrapperTypeInfo);
}

void V8WindowPartial::USBInterfaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBInterface::wrapperTypeInfo);
}

void V8WindowPartial::USBIsochronousInTransferPacketConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousInTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousInTransferPacket::wrapperTypeInfo);
}

void V8WindowPartial::USBIsochronousInTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousInTransferResult::wrapperTypeInfo);
}

void V8WindowPartial::USBIsochronousOutTransferPacketConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousOutTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousOutTransferPacket::wrapperTypeInfo);
}

void V8WindowPartial::USBIsochronousOutTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousOutTransferResult::wrapperTypeInfo);
}

void V8WindowPartial::USBOutTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBOutTransferResult::wrapperTypeInfo);
}

void V8WindowPartial::AudioWorkletConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioWorklet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioWorklet::wrapperTypeInfo);
}

void V8WindowPartial::CacheConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Cache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Cache::wrapperTypeInfo);
}

void V8WindowPartial::CacheStorageConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CacheStorage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CacheStorage::wrapperTypeInfo);
}

void V8WindowPartial::ClipboardConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Clipboard_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Clipboard::wrapperTypeInfo);
}

void V8WindowPartial::CredentialConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Credential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Credential::wrapperTypeInfo);
}

void V8WindowPartial::CredentialsContainerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CredentialsContainer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CredentialsContainer::wrapperTypeInfo);
}

void V8WindowPartial::FederatedCredentialConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FederatedCredential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FederatedCredential::wrapperTypeInfo);
}

void V8WindowPartial::MediaKeyMessageEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeyMessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaKeyMessageEvent::wrapperTypeInfo);
}

void V8WindowPartial::MediaKeySessionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeySession_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaKeySession::wrapperTypeInfo);
}

void V8WindowPartial::MediaKeyStatusMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeyStatusMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaKeyStatusMap::wrapperTypeInfo);
}

void V8WindowPartial::MediaKeySystemAccessConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeySystemAccess_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaKeySystemAccess::wrapperTypeInfo);
}

void V8WindowPartial::MediaKeysConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeys_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaKeys::wrapperTypeInfo);
}

void V8WindowPartial::NavigationPreloadManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NavigationPreloadManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NavigationPreloadManager::wrapperTypeInfo);
}

void V8WindowPartial::PasswordCredentialConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PasswordCredential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PasswordCredential::wrapperTypeInfo);
}

void V8WindowPartial::StorageManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StorageManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StorageManager::wrapperTypeInfo);
}

void V8WindowPartial::AnalyserNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnalyserNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AnalyserNode::wrapperTypeInfo);
}

void V8WindowPartial::AudioBufferConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioBuffer::wrapperTypeInfo);
}

void V8WindowPartial::AudioBufferSourceNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioBufferSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioBufferSourceNode::wrapperTypeInfo);
}

void V8WindowPartial::AudioContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioContext::wrapperTypeInfo);
}

void V8WindowPartial::AudioDestinationNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioDestinationNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioDestinationNode::wrapperTypeInfo);
}

void V8WindowPartial::AudioListenerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioListener_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioListener::wrapperTypeInfo);
}

void V8WindowPartial::AudioNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioNode::wrapperTypeInfo);
}

void V8WindowPartial::AudioParamConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioParam_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioParam::wrapperTypeInfo);
}

void V8WindowPartial::AudioParamMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioParamMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioParamMap::wrapperTypeInfo);
}

void V8WindowPartial::AudioProcessingEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioProcessingEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioProcessingEvent::wrapperTypeInfo);
}

void V8WindowPartial::AudioScheduledSourceNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioScheduledSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioScheduledSourceNode::wrapperTypeInfo);
}

void V8WindowPartial::AudioWorkletNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioWorkletNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AudioWorkletNode::wrapperTypeInfo);
}

void V8WindowPartial::BaseAudioContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BaseAudioContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BaseAudioContext::wrapperTypeInfo);
}

void V8WindowPartial::BatteryManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BatteryManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BatteryManager::wrapperTypeInfo);
}

void V8WindowPartial::BeforeInstallPromptEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BeforeInstallPromptEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BeforeInstallPromptEvent::wrapperTypeInfo);
}

void V8WindowPartial::BiquadFilterNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BiquadFilterNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BiquadFilterNode::wrapperTypeInfo);
}

void V8WindowPartial::BlobEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BlobEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BlobEvent::wrapperTypeInfo);
}

void V8WindowPartial::BroadcastChannelConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BroadcastChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BroadcastChannel::wrapperTypeInfo);
}

void V8WindowPartial::CanvasCaptureMediaStreamTrackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasCaptureMediaStreamTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CanvasCaptureMediaStreamTrack::wrapperTypeInfo);
}

void V8WindowPartial::CanvasRenderingContext2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CanvasRenderingContext2D::wrapperTypeInfo);
}

void V8WindowPartial::ChannelMergerNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ChannelMergerNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ChannelMergerNode::wrapperTypeInfo);
}

void V8WindowPartial::ChannelSplitterNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ChannelSplitterNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ChannelSplitterNode::wrapperTypeInfo);
}

void V8WindowPartial::CloseEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CloseEvent::wrapperTypeInfo);
}

void V8WindowPartial::ConstantSourceNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ConstantSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ConstantSourceNode::wrapperTypeInfo);
}

void V8WindowPartial::ConvolverNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ConvolverNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ConvolverNode::wrapperTypeInfo);
}

void V8WindowPartial::CryptoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Crypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Crypto::wrapperTypeInfo);
}

void V8WindowPartial::CryptoKeyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CryptoKey_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CryptoKey::wrapperTypeInfo);
}

void V8WindowPartial::DOMErrorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMError::wrapperTypeInfo);
}

void V8WindowPartial::DelayNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DelayNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DelayNode::wrapperTypeInfo);
}

void V8WindowPartial::DeviceMotionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DeviceMotionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DeviceMotionEvent::wrapperTypeInfo);
}

void V8WindowPartial::DeviceOrientationEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DeviceOrientationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DeviceOrientationEvent::wrapperTypeInfo);
}

void V8WindowPartial::DynamicsCompressorNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DynamicsCompressorNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DynamicsCompressorNode::wrapperTypeInfo);
}

void V8WindowPartial::EventSourceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_EventSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8EventSource::wrapperTypeInfo);
}

void V8WindowPartial::GainNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GainNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8GainNode::wrapperTypeInfo);
}

void V8WindowPartial::GamepadButtonConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadButton_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8GamepadButton::wrapperTypeInfo);
}

void V8WindowPartial::GamepadConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Gamepad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Gamepad::wrapperTypeInfo);
}

void V8WindowPartial::GamepadEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8GamepadEvent::wrapperTypeInfo);
}

void V8WindowPartial::IDBCursorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBCursor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBCursor::wrapperTypeInfo);
}

void V8WindowPartial::IDBCursorWithValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBCursorWithValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBCursorWithValue::wrapperTypeInfo);
}

void V8WindowPartial::IDBDatabaseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBDatabase_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBDatabase::wrapperTypeInfo);
}

void V8WindowPartial::IDBFactoryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBFactory::wrapperTypeInfo);
}

void V8WindowPartial::IDBIndexConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBIndex_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBIndex::wrapperTypeInfo);
}

void V8WindowPartial::IDBKeyRangeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBKeyRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBKeyRange::wrapperTypeInfo);
}

void V8WindowPartial::IDBObjectStoreConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObjectStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObjectStore::wrapperTypeInfo);
}

void V8WindowPartial::IDBOpenDBRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBOpenDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBOpenDBRequest::wrapperTypeInfo);
}

void V8WindowPartial::IDBRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBRequest::wrapperTypeInfo);
}

void V8WindowPartial::IDBTransactionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBTransaction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBTransaction::wrapperTypeInfo);
}

void V8WindowPartial::IDBVersionChangeEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBVersionChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBVersionChangeEvent::wrapperTypeInfo);
}

void V8WindowPartial::IIRFilterNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IIRFilterNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IIRFilterNode::wrapperTypeInfo);
}

void V8WindowPartial::ImageBitmapRenderingContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageBitmapRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ImageBitmapRenderingContext::wrapperTypeInfo);
}

void V8WindowPartial::ImageCaptureConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageCapture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ImageCapture::wrapperTypeInfo);
}

void V8WindowPartial::InputDeviceInfoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_InputDeviceInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8InputDeviceInfo::wrapperTypeInfo);
}

void V8WindowPartial::MIDIAccessConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIAccess_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIAccess::wrapperTypeInfo);
}

void V8WindowPartial::MIDIConnectionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIConnectionEvent::wrapperTypeInfo);
}

void V8WindowPartial::MIDIInputConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIInput_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIInput::wrapperTypeInfo);
}

void V8WindowPartial::MIDIInputMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIInputMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIInputMap::wrapperTypeInfo);
}

void V8WindowPartial::MIDIMessageEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIMessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIMessageEvent::wrapperTypeInfo);
}

void V8WindowPartial::MIDIOutputConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIOutput_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIOutput::wrapperTypeInfo);
}

void V8WindowPartial::MIDIOutputMapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIOutputMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIOutputMap::wrapperTypeInfo);
}

void V8WindowPartial::MIDIPortConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIPort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MIDIPort::wrapperTypeInfo);
}

void V8WindowPartial::MediaCapabilitiesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaCapabilities::wrapperTypeInfo);
}

void V8WindowPartial::MediaDeviceInfoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaDeviceInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaDeviceInfo::wrapperTypeInfo);
}

void V8WindowPartial::MediaDevicesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaDevices_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaDevices::wrapperTypeInfo);
}

void V8WindowPartial::MediaElementAudioSourceNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaElementAudioSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaElementAudioSourceNode::wrapperTypeInfo);
}

void V8WindowPartial::MediaEncryptedEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaEncryptedEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaEncryptedEvent::wrapperTypeInfo);
}

void V8WindowPartial::MediaRecorderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaRecorder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaRecorder::wrapperTypeInfo);
}

void V8WindowPartial::MediaSettingsRangeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaSettingsRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaSettingsRange::wrapperTypeInfo);
}

void V8WindowPartial::MediaSourceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaSource::wrapperTypeInfo);
}

void V8WindowPartial::MediaStreamAudioDestinationNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamAudioDestinationNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStreamAudioDestinationNode::wrapperTypeInfo);
}

void V8WindowPartial::MediaStreamAudioSourceNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamAudioSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStreamAudioSourceNode::wrapperTypeInfo);
}

void V8WindowPartial::MediaStreamConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStream::wrapperTypeInfo);
}

void V8WindowPartial::MediaStreamEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStreamEvent::wrapperTypeInfo);
}

void V8WindowPartial::MediaStreamTrackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStreamTrack::wrapperTypeInfo);
}

void V8WindowPartial::MediaStreamTrackEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamTrackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStreamTrackEvent::wrapperTypeInfo);
}

void V8WindowPartial::MimeTypeArrayConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MimeTypeArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MimeTypeArray::wrapperTypeInfo);
}

void V8WindowPartial::MimeTypeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MimeType_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MimeType::wrapperTypeInfo);
}

void V8WindowPartial::NetworkInformationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NetworkInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NetworkInformation::wrapperTypeInfo);
}

void V8WindowPartial::OfflineAudioCompletionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OfflineAudioCompletionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OfflineAudioCompletionEvent::wrapperTypeInfo);
}

void V8WindowPartial::OfflineAudioContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OfflineAudioContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OfflineAudioContext::wrapperTypeInfo);
}

void V8WindowPartial::OscillatorNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OscillatorNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OscillatorNode::wrapperTypeInfo);
}

void V8WindowPartial::OverconstrainedErrorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OverconstrainedError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OverconstrainedError::wrapperTypeInfo);
}

void V8WindowPartial::PannerNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PannerNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PannerNode::wrapperTypeInfo);
}

void V8WindowPartial::PeriodicWaveConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PeriodicWave_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PeriodicWave::wrapperTypeInfo);
}

void V8WindowPartial::PhotoCapabilitiesConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PhotoCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PhotoCapabilities::wrapperTypeInfo);
}

void V8WindowPartial::PluginArrayConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PluginArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PluginArray::wrapperTypeInfo);
}

void V8WindowPartial::PluginConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Plugin_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Plugin::wrapperTypeInfo);
}

void V8WindowPartial::RTCCertificateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCCertificate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCCertificate::wrapperTypeInfo);
}

void V8WindowPartial::RTCDTMFSenderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDTMFSender_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCDTMFSender::wrapperTypeInfo);
}

void V8WindowPartial::RTCDTMFToneChangeEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDTMFToneChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCDTMFToneChangeEvent::wrapperTypeInfo);
}

void V8WindowPartial::RTCDataChannelConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDataChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCDataChannel::wrapperTypeInfo);
}

void V8WindowPartial::RTCDataChannelEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDataChannelEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCDataChannelEvent::wrapperTypeInfo);
}

void V8WindowPartial::RTCIceCandidateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCIceCandidate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCIceCandidate::wrapperTypeInfo);
}

void V8WindowPartial::RTCPeerConnectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCPeerConnection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCPeerConnection::wrapperTypeInfo);
}

void V8WindowPartial::RTCPeerConnectionIceEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCPeerConnectionIceEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCPeerConnectionIceEvent::wrapperTypeInfo);
}

void V8WindowPartial::RTCRtpContributingSourceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCRtpContributingSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCRtpContributingSource::wrapperTypeInfo);
}

void V8WindowPartial::RTCRtpReceiverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCRtpReceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCRtpReceiver::wrapperTypeInfo);
}

void V8WindowPartial::RTCRtpSenderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCRtpSender_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCRtpSender::wrapperTypeInfo);
}

void V8WindowPartial::RTCSessionDescriptionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCSessionDescription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCSessionDescription::wrapperTypeInfo);
}

void V8WindowPartial::RTCStatsReportConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCStatsReport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCStatsReport::wrapperTypeInfo);
}

void V8WindowPartial::RTCTrackEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCTrackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCTrackEvent::wrapperTypeInfo);
}

void V8WindowPartial::ScreenOrientationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScreenOrientation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ScreenOrientation::wrapperTypeInfo);
}

void V8WindowPartial::ScriptProcessorNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScriptProcessorNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ScriptProcessorNode::wrapperTypeInfo);
}

void V8WindowPartial::ServiceWorkerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ServiceWorker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ServiceWorker::wrapperTypeInfo);
}

void V8WindowPartial::ServiceWorkerContainerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ServiceWorkerContainer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ServiceWorkerContainer::wrapperTypeInfo);
}

void V8WindowPartial::ServiceWorkerRegistrationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ServiceWorkerRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ServiceWorkerRegistration::wrapperTypeInfo);
}

void V8WindowPartial::SourceBufferConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SourceBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SourceBuffer::wrapperTypeInfo);
}

void V8WindowPartial::SourceBufferListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SourceBufferList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SourceBufferList::wrapperTypeInfo);
}

void V8WindowPartial::StereoPannerNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StereoPannerNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StereoPannerNode::wrapperTypeInfo);
}

void V8WindowPartial::StorageConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Storage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Storage::wrapperTypeInfo);
}

void V8WindowPartial::StorageEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StorageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StorageEvent::wrapperTypeInfo);
}

void V8WindowPartial::SubtleCryptoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SubtleCrypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SubtleCrypto::wrapperTypeInfo);
}

void V8WindowPartial::SyncManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SyncManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SyncManager::wrapperTypeInfo);
}

void V8WindowPartial::TextDecoderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextDecoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextDecoder::wrapperTypeInfo);
}

void V8WindowPartial::TextEncoderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextEncoder::wrapperTypeInfo);
}

void V8WindowPartial::WaveShaperNodeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WaveShaperNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WaveShaperNode::wrapperTypeInfo);
}

void V8WindowPartial::WebGLActiveInfoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLActiveInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLActiveInfo::wrapperTypeInfo);
}

void V8WindowPartial::WebGLBufferConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLBuffer::wrapperTypeInfo);
}

void V8WindowPartial::WebGLContextEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLContextEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLContextEvent::wrapperTypeInfo);
}

void V8WindowPartial::WebGLFramebufferConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLFramebuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLFramebuffer::wrapperTypeInfo);
}

void V8WindowPartial::WebGLProgramConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLProgram_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLProgram::wrapperTypeInfo);
}

void V8WindowPartial::WebGLQueryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLQuery_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLQuery::wrapperTypeInfo);
}

void V8WindowPartial::WebGLRenderbufferConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLRenderbuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLRenderbuffer::wrapperTypeInfo);
}

void V8WindowPartial::WebGLSamplerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLSampler_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLSampler::wrapperTypeInfo);
}

void V8WindowPartial::WebGLShaderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLShader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLShader::wrapperTypeInfo);
}

void V8WindowPartial::WebGLShaderPrecisionFormatConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLShaderPrecisionFormat_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLShaderPrecisionFormat::wrapperTypeInfo);
}

void V8WindowPartial::WebGLSyncConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLSync::wrapperTypeInfo);
}

void V8WindowPartial::WebGLTextureConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLTexture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLTexture::wrapperTypeInfo);
}

void V8WindowPartial::WebGLTransformFeedbackConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLTransformFeedback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLTransformFeedback::wrapperTypeInfo);
}

void V8WindowPartial::WebGLUniformLocationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLUniformLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLUniformLocation::wrapperTypeInfo);
}

void V8WindowPartial::WebGLVertexArrayObjectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLVertexArrayObject_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLVertexArrayObject::wrapperTypeInfo);
}

void V8WindowPartial::WebSocketConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebSocket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebSocket::wrapperTypeInfo);
}

void V8WindowPartial::animationWorkletAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_animationWorklet_Getter");

  DOMWindowPartialV8Internal::animationWorkletAttributeGetter(info);
}

void V8WindowPartial::onappinstalledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onappinstalled_Getter");

  DOMWindowPartialV8Internal::onappinstalledAttributeGetter(info);
}

void V8WindowPartial::onappinstalledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onappinstalled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowPartialV8Internal::onappinstalledAttributeSetter(v8Value, info);
}

void V8WindowPartial::onbeforeinstallpromptAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeinstallprompt_Getter");

  DOMWindowPartialV8Internal::onbeforeinstallpromptAttributeGetter(info);
}

void V8WindowPartial::onbeforeinstallpromptAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeinstallprompt_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowPartialV8Internal::onbeforeinstallpromptAttributeSetter(v8Value, info);
}

void V8WindowPartial::cachesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_caches_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGlobalCacheStorage);

  DOMWindowPartialV8Internal::cachesAttributeGetter(info);
}

void V8WindowPartial::cookieStoreAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cookieStore_Getter");

  DOMWindowPartialV8Internal::cookieStoreAttributeGetter(info);
}

void V8WindowPartial::cookieStoreAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cookieStore_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowPartialV8Internal::cookieStoreAttributeSetter(v8Value, info);
}

void V8WindowPartial::cryptoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_crypto_Getter");

  DOMWindowPartialV8Internal::cryptoAttributeGetter(info);
}

void V8WindowPartial::ondevicemotionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondevicemotion_Getter");

  DOMWindowPartialV8Internal::ondevicemotionAttributeGetter(info);
}

void V8WindowPartial::ondevicemotionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondevicemotion_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowPartialV8Internal::ondevicemotionAttributeSetter(v8Value, info);
}

void V8WindowPartial::ondeviceorientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientation_Getter");

  DOMWindowPartialV8Internal::ondeviceorientationAttributeGetter(info);
}

void V8WindowPartial::ondeviceorientationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientation_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowPartialV8Internal::ondeviceorientationAttributeSetter(v8Value, info);
}

void V8WindowPartial::ondeviceorientationabsoluteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientationabsolute_Getter");

  DOMWindowPartialV8Internal::ondeviceorientationabsoluteAttributeGetter(info);
}

void V8WindowPartial::ondeviceorientationabsoluteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientationabsolute_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DOMWindowPartialV8Internal::ondeviceorientationabsoluteAttributeSetter(v8Value, info);
}

void V8WindowPartial::indexedDBAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_indexedDB_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUnprefixedIndexedDB);

  DOMWindowPartialV8Internal::indexedDBAttributeGetter(info);
}

void V8WindowPartial::webkitMediaStreamConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitMediaStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MediaStream::wrapperTypeInfo);
}

void V8WindowPartial::webkitRTCPeerConnectionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitRTCPeerConnection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8RTCPeerConnection::wrapperTypeInfo);
}

void V8WindowPartial::webkitStorageInfoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitStorageInfo_Getter");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedStorageInfo);

  DOMWindowPartialV8Internal::webkitStorageInfoAttributeGetter(info);
}

void V8WindowPartial::webkitSpeechGrammarConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechGrammar_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_WebkitSpeechGrammar_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, &V8SpeechGrammar::wrapperTypeInfo);
}

void V8WindowPartial::webkitSpeechGrammarListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechGrammarList_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_WebkitSpeechGrammarList_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, &V8SpeechGrammarList::wrapperTypeInfo);
}

void V8WindowPartial::webkitSpeechRecognitionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechRecognition_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_WebkitSpeechRecognition_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, &V8SpeechRecognition::wrapperTypeInfo);
}

void V8WindowPartial::webkitSpeechRecognitionErrorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechRecognitionError_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_WebkitSpeechRecognitionError_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, &V8SpeechRecognitionError::wrapperTypeInfo);
}

void V8WindowPartial::webkitSpeechRecognitionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechRecognitionEvent_ConstructorGetterCallback");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, &V8SpeechRecognitionEvent::wrapperTypeInfo);
}

void V8WindowPartial::speechSynthesisAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_speechSynthesis_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Window_SpeechSynthesis_AttributeGetter);

  DOMWindowPartialV8Internal::speechSynthesisAttributeGetter(info);
}

void V8WindowPartial::sessionStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_sessionStorage_Getter");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (scriptState->World().IsIsolatedWorld() && contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogGetter("Window.sessionStorage");
  }

  DOMWindowPartialV8Internal::sessionStorageAttributeGetter(info);
}

void V8WindowPartial::localStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_localStorage_Getter");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (scriptState->World().IsIsolatedWorld() && contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogGetter("Window.localStorage");
  }

  DOMWindowPartialV8Internal::localStorageAttributeGetter(info);
}

void V8WindowPartial::webkitRequestFileSystemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitRequestFileSystem");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRequestFileSystem);
  DOMWindowPartialV8Internal::webkitRequestFileSystemMethod(info);
}

void V8WindowPartial::webkitResolveLocalFileSystemURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitResolveLocalFileSystemURL");

  DOMWindowPartialV8Internal::webkitResolveLocalFileSystemURLMethod(info);
}

void V8WindowPartial::openDatabaseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_openDatabase");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kOpenWebDatabase);
  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("Window.openDatabase", info);
  }
  DOMWindowPartialV8Internal::openDatabaseMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static const V8DOMConfiguration::AttributeConfiguration V8WindowLazyDataAttributes[] = {
    { "AnalyserNode", V8WindowPartial::AnalyserNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioBuffer", V8WindowPartial::AudioBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioBufferSourceNode", V8WindowPartial::AudioBufferSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioContext", V8WindowPartial::AudioContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioDestinationNode", V8WindowPartial::AudioDestinationNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioListener", V8WindowPartial::AudioListenerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioNode", V8WindowPartial::AudioNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioParam", V8WindowPartial::AudioParamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioParamMap", V8WindowPartial::AudioParamMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioProcessingEvent", V8WindowPartial::AudioProcessingEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioScheduledSourceNode", V8WindowPartial::AudioScheduledSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AudioWorkletNode", V8WindowPartial::AudioWorkletNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BaseAudioContext", V8WindowPartial::BaseAudioContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BatteryManager", V8WindowPartial::BatteryManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BeforeInstallPromptEvent", V8WindowPartial::BeforeInstallPromptEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BiquadFilterNode", V8WindowPartial::BiquadFilterNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BlobEvent", V8WindowPartial::BlobEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "BroadcastChannel", V8WindowPartial::BroadcastChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CanvasCaptureMediaStreamTrack", V8WindowPartial::CanvasCaptureMediaStreamTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CanvasRenderingContext2D", V8WindowPartial::CanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ChannelMergerNode", V8WindowPartial::ChannelMergerNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ChannelSplitterNode", V8WindowPartial::ChannelSplitterNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CloseEvent", V8WindowPartial::CloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ConstantSourceNode", V8WindowPartial::ConstantSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ConvolverNode", V8WindowPartial::ConvolverNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Crypto", V8WindowPartial::CryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CryptoKey", V8WindowPartial::CryptoKeyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMError", V8WindowPartial::DOMErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DelayNode", V8WindowPartial::DelayNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DeviceMotionEvent", V8WindowPartial::DeviceMotionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DeviceOrientationEvent", V8WindowPartial::DeviceOrientationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DynamicsCompressorNode", V8WindowPartial::DynamicsCompressorNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "EventSource", V8WindowPartial::EventSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "GainNode", V8WindowPartial::GainNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "GamepadButton", V8WindowPartial::GamepadButtonConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Gamepad", V8WindowPartial::GamepadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "GamepadEvent", V8WindowPartial::GamepadEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBCursor", V8WindowPartial::IDBCursorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBCursorWithValue", V8WindowPartial::IDBCursorWithValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBDatabase", V8WindowPartial::IDBDatabaseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBFactory", V8WindowPartial::IDBFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBIndex", V8WindowPartial::IDBIndexConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBKeyRange", V8WindowPartial::IDBKeyRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBObjectStore", V8WindowPartial::IDBObjectStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBOpenDBRequest", V8WindowPartial::IDBOpenDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBRequest", V8WindowPartial::IDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBTransaction", V8WindowPartial::IDBTransactionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBVersionChangeEvent", V8WindowPartial::IDBVersionChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IIRFilterNode", V8WindowPartial::IIRFilterNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmapRenderingContext", V8WindowPartial::ImageBitmapRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ImageCapture", V8WindowPartial::ImageCaptureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "InputDeviceInfo", V8WindowPartial::InputDeviceInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIAccess", V8WindowPartial::MIDIAccessConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIConnectionEvent", V8WindowPartial::MIDIConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIInput", V8WindowPartial::MIDIInputConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIInputMap", V8WindowPartial::MIDIInputMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIMessageEvent", V8WindowPartial::MIDIMessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIOutput", V8WindowPartial::MIDIOutputConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIOutputMap", V8WindowPartial::MIDIOutputMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MIDIPort", V8WindowPartial::MIDIPortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaCapabilities", V8WindowPartial::MediaCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaDeviceInfo", V8WindowPartial::MediaDeviceInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaDevices", V8WindowPartial::MediaDevicesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaElementAudioSourceNode", V8WindowPartial::MediaElementAudioSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaEncryptedEvent", V8WindowPartial::MediaEncryptedEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaRecorder", V8WindowPartial::MediaRecorderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaSettingsRange", V8WindowPartial::MediaSettingsRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaSource", V8WindowPartial::MediaSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamAudioDestinationNode", V8WindowPartial::MediaStreamAudioDestinationNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamAudioSourceNode", V8WindowPartial::MediaStreamAudioSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaStream", V8WindowPartial::MediaStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamEvent", V8WindowPartial::MediaStreamEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamTrack", V8WindowPartial::MediaStreamTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamTrackEvent", V8WindowPartial::MediaStreamTrackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MimeTypeArray", V8WindowPartial::MimeTypeArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MimeType", V8WindowPartial::MimeTypeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "NetworkInformation", V8WindowPartial::NetworkInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "OfflineAudioCompletionEvent", V8WindowPartial::OfflineAudioCompletionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "OfflineAudioContext", V8WindowPartial::OfflineAudioContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "OscillatorNode", V8WindowPartial::OscillatorNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "OverconstrainedError", V8WindowPartial::OverconstrainedErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PannerNode", V8WindowPartial::PannerNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PeriodicWave", V8WindowPartial::PeriodicWaveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PhotoCapabilities", V8WindowPartial::PhotoCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PluginArray", V8WindowPartial::PluginArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Plugin", V8WindowPartial::PluginConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCCertificate", V8WindowPartial::RTCCertificateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCDTMFSender", V8WindowPartial::RTCDTMFSenderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCDTMFToneChangeEvent", V8WindowPartial::RTCDTMFToneChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCDataChannel", V8WindowPartial::RTCDataChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCDataChannelEvent", V8WindowPartial::RTCDataChannelEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCIceCandidate", V8WindowPartial::RTCIceCandidateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCPeerConnection", V8WindowPartial::RTCPeerConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCPeerConnectionIceEvent", V8WindowPartial::RTCPeerConnectionIceEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCRtpContributingSource", V8WindowPartial::RTCRtpContributingSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCRtpReceiver", V8WindowPartial::RTCRtpReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCRtpSender", V8WindowPartial::RTCRtpSenderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCSessionDescription", V8WindowPartial::RTCSessionDescriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCStatsReport", V8WindowPartial::RTCStatsReportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "RTCTrackEvent", V8WindowPartial::RTCTrackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ScreenOrientation", V8WindowPartial::ScreenOrientationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ScriptProcessorNode", V8WindowPartial::ScriptProcessorNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ServiceWorker", V8WindowPartial::ServiceWorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ServiceWorkerContainer", V8WindowPartial::ServiceWorkerContainerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ServiceWorkerRegistration", V8WindowPartial::ServiceWorkerRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SourceBuffer", V8WindowPartial::SourceBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SourceBufferList", V8WindowPartial::SourceBufferListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "StereoPannerNode", V8WindowPartial::StereoPannerNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Storage", V8WindowPartial::StorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "StorageEvent", V8WindowPartial::StorageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SubtleCrypto", V8WindowPartial::SubtleCryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SyncManager", V8WindowPartial::SyncManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextDecoder", V8WindowPartial::TextDecoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextEncoder", V8WindowPartial::TextEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WaveShaperNode", V8WindowPartial::WaveShaperNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLActiveInfo", V8WindowPartial::WebGLActiveInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLBuffer", V8WindowPartial::WebGLBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLContextEvent", V8WindowPartial::WebGLContextEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLFramebuffer", V8WindowPartial::WebGLFramebufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLProgram", V8WindowPartial::WebGLProgramConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLQuery", V8WindowPartial::WebGLQueryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLRenderbuffer", V8WindowPartial::WebGLRenderbufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLSampler", V8WindowPartial::WebGLSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLShader", V8WindowPartial::WebGLShaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLShaderPrecisionFormat", V8WindowPartial::WebGLShaderPrecisionFormatConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLSync", V8WindowPartial::WebGLSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLTexture", V8WindowPartial::WebGLTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLTransformFeedback", V8WindowPartial::WebGLTransformFeedbackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLUniformLocation", V8WindowPartial::WebGLUniformLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebGLVertexArrayObject", V8WindowPartial::WebGLVertexArrayObjectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebSocket", V8WindowPartial::WebSocketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitMediaStream", V8WindowPartial::webkitMediaStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitRTCPeerConnection", V8WindowPartial::webkitRTCPeerConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static const V8DOMConfiguration::AccessorConfiguration V8WindowAccessors[] = {
    { "onappinstalled", V8WindowPartial::onappinstalledAttributeGetterCallback, V8WindowPartial::onappinstalledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onbeforeinstallprompt", V8WindowPartial::onbeforeinstallpromptAttributeGetterCallback, V8WindowPartial::onbeforeinstallpromptAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "crypto", V8WindowPartial::cryptoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondevicemotion", V8WindowPartial::ondevicemotionAttributeGetterCallback, V8WindowPartial::ondevicemotionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondeviceorientation", V8WindowPartial::ondeviceorientationAttributeGetterCallback, V8WindowPartial::ondeviceorientationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondeviceorientationabsolute", V8WindowPartial::ondeviceorientationabsoluteAttributeGetterCallback, V8WindowPartial::ondeviceorientationabsoluteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "indexedDB", V8WindowPartial::indexedDBAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitStorageInfo", V8WindowPartial::webkitStorageInfoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sessionStorage", V8WindowPartial::sessionStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "localStorage", V8WindowPartial::localStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8WindowPartial::installV8WindowTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8Window::installV8WindowTemplate(isolate, world, interfaceTemplate);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototypeTemplate->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instanceTemplate->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8WindowConstants[] = {
      {"TEMPORARY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"PERSISTENT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8WindowConstants, arraysize(V8WindowConstants));
  static_assert(0 == DOMWindowFileSystem::kTemporary, "the value of DOMWindow_kTemporary does not match with implementation");
  static_assert(1 == DOMWindowFileSystem::kPersistent, "the value of DOMWindow_kPersistent does not match with implementation");
  V8DOMConfiguration::InstallLazyDataAttributes(
      isolate, world, instanceTemplate, prototypeTemplate,
      V8WindowLazyDataAttributes, arraysize(V8WindowLazyDataAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WindowAccessors, arraysize(V8WindowAccessors));

  // Custom signature

  V8WindowPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8WindowPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8Window::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::AsyncCookiesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CookieChangeEvent", V8WindowPartial::CookieChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CookieStore", V8WindowPartial::CookieStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "BackgroundFetchFetch", V8WindowPartial::BackgroundFetchFetchConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchManager", V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::GamepadVibrationEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "GamepadHapticActuator", V8WindowPartial::GamepadHapticActuatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "IDBObservation", V8WindowPartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8WindowPartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8WindowPartial::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MediaSessionEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "MediaMetadata", V8WindowPartial::MediaMetadataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MediaSession", V8WindowPartial::MediaSessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MediaSourceExperimentalEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "TrackDefault", V8WindowPartial::TrackDefaultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrackDefaultList", V8WindowPartial::TrackDefaultListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "VideoPlaybackQuality", V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Notification", V8WindowPartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "OffscreenCanvasRenderingContext2D", V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PaymentInstruments", V8WindowPartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PaymentManager", V8WindowPartial::PaymentManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PaymentRequestUpdateEvent", V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Permissions", V8WindowPartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8WindowPartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PresentationEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Presentation", V8WindowPartial::PresentationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationAvailability", V8WindowPartial::PresentationAvailabilityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnection", V8WindowPartial::PresentationConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnectionAvailableEvent", V8WindowPartial::PresentationConnectionAvailableEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnectionCloseEvent", V8WindowPartial::PresentationConnectionCloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnectionList", V8WindowPartial::PresentationConnectionListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationReceiver", V8WindowPartial::PresentationReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationRequest", V8WindowPartial::PresentationRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PushManager", V8WindowPartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8WindowPartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::RemotePlaybackEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "RemotePlayback", V8WindowPartial::RemotePlaybackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "SpeechSynthesisEvent", V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "SpeechSynthesisUtterance", V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechGrammar", V8WindowPartial::webkitSpeechGrammarConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechGrammarList", V8WindowPartial::webkitSpeechGrammarListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognition", V8WindowPartial::webkitSpeechRecognitionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionError", V8WindowPartial::webkitSpeechRecognitionErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionEvent", V8WindowPartial::webkitSpeechRecognitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "BarcodeDetector", V8WindowPartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DetectedBarcode", V8WindowPartial::DetectedBarcodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DetectedFace", V8WindowPartial::DetectedFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DetectedText", V8WindowPartial::DetectedTextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8WindowPartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8WindowPartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CanvasGradient", V8WindowPartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8WindowPartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8WindowPartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8WindowPartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Bluetooth", V8WindowPartial::BluetoothConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothCharacteristicProperties", V8WindowPartial::BluetoothCharacteristicPropertiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothDevice", V8WindowPartial::BluetoothDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTCharacteristic", V8WindowPartial::BluetoothRemoteGATTCharacteristicConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTDescriptor", V8WindowPartial::BluetoothRemoteGATTDescriptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTServer", V8WindowPartial::BluetoothRemoteGATTServerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTService", V8WindowPartial::BluetoothRemoteGATTServiceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothUUID", V8WindowPartial::BluetoothUUIDConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebUSBEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "USBAlternateInterface", V8WindowPartial::USBAlternateInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBConfiguration", V8WindowPartial::USBConfigurationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBConnectionEvent", V8WindowPartial::USBConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBDevice", V8WindowPartial::USBDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBEndpoint", V8WindowPartial::USBEndpointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBInterface", V8WindowPartial::USBInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBInTransferResult", V8WindowPartial::USBInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousInTransferPacket", V8WindowPartial::USBIsochronousInTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousInTransferResult", V8WindowPartial::USBIsochronousInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousOutTransferPacket", V8WindowPartial::USBIsochronousOutTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousOutTransferResult", V8WindowPartial::USBIsochronousOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBOutTransferResult", V8WindowPartial::USBOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }

  if (RuntimeEnabledFeatures::AsyncCookiesEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "cookieStore", V8WindowPartial::cookieStoreAttributeGetterCallback, V8WindowPartial::cookieStoreAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "speechSynthesis", V8WindowPartial::speechSynthesisAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitRequestFileSystemMethodConfiguration[] = {
      {"webkitRequestFileSystem", V8WindowPartial::webkitRequestFileSystemMethodCallback, 3, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitRequestFileSystemMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitResolveLocalFileSystemURLMethodConfiguration[] = {
      {"webkitResolveLocalFileSystemURL", V8WindowPartial::webkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitResolveLocalFileSystemURLMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::DatabaseEnabled()) {
    const V8DOMConfiguration::MethodConfiguration openDatabaseMethodConfiguration[] = {
      {"openDatabase", V8WindowPartial::openDatabaseMethodCallback, 4, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : openDatabaseMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8WindowPartial::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);

  if (RuntimeEnabledFeatures::AsyncCookiesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CookieChangeEvent", V8WindowPartial::CookieChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CookieStore", V8WindowPartial::CookieStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "BackgroundFetchFetch", V8WindowPartial::BackgroundFetchFetchConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchManager", V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::GamepadVibrationEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "GamepadHapticActuator", V8WindowPartial::GamepadHapticActuatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "IDBObservation", V8WindowPartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8WindowPartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8WindowPartial::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MediaSessionEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "MediaMetadata", V8WindowPartial::MediaMetadataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MediaSession", V8WindowPartial::MediaSessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MediaSourceExperimentalEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "TrackDefault", V8WindowPartial::TrackDefaultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrackDefaultList", V8WindowPartial::TrackDefaultListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "VideoPlaybackQuality", V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Notification", V8WindowPartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "OffscreenCanvasRenderingContext2D", V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PaymentInstruments", V8WindowPartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PaymentManager", V8WindowPartial::PaymentManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PaymentRequestUpdateEvent", V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Permissions", V8WindowPartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8WindowPartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PresentationEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Presentation", V8WindowPartial::PresentationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationAvailability", V8WindowPartial::PresentationAvailabilityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnection", V8WindowPartial::PresentationConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnectionAvailableEvent", V8WindowPartial::PresentationConnectionAvailableEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnectionCloseEvent", V8WindowPartial::PresentationConnectionCloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationConnectionList", V8WindowPartial::PresentationConnectionListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationReceiver", V8WindowPartial::PresentationReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PresentationRequest", V8WindowPartial::PresentationRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PushManager", V8WindowPartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8WindowPartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::RemotePlaybackEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "RemotePlayback", V8WindowPartial::RemotePlaybackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "SpeechSynthesisEvent", V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "SpeechSynthesisUtterance", V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechGrammar", V8WindowPartial::webkitSpeechGrammarConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechGrammarList", V8WindowPartial::webkitSpeechGrammarListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognition", V8WindowPartial::webkitSpeechRecognitionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionError", V8WindowPartial::webkitSpeechRecognitionErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionEvent", V8WindowPartial::webkitSpeechRecognitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "BarcodeDetector", V8WindowPartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DetectedBarcode", V8WindowPartial::DetectedBarcodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DetectedFace", V8WindowPartial::DetectedFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "DetectedText", V8WindowPartial::DetectedTextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8WindowPartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8WindowPartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CanvasGradient", V8WindowPartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8WindowPartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8WindowPartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8WindowPartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Bluetooth", V8WindowPartial::BluetoothConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothCharacteristicProperties", V8WindowPartial::BluetoothCharacteristicPropertiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothDevice", V8WindowPartial::BluetoothDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTCharacteristic", V8WindowPartial::BluetoothRemoteGATTCharacteristicConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTDescriptor", V8WindowPartial::BluetoothRemoteGATTDescriptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTServer", V8WindowPartial::BluetoothRemoteGATTServerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothRemoteGATTService", V8WindowPartial::BluetoothRemoteGATTServiceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BluetoothUUID", V8WindowPartial::BluetoothUUIDConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebUSBEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "USBAlternateInterface", V8WindowPartial::USBAlternateInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBConfiguration", V8WindowPartial::USBConfigurationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBConnectionEvent", V8WindowPartial::USBConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBDevice", V8WindowPartial::USBDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBEndpoint", V8WindowPartial::USBEndpointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBInterface", V8WindowPartial::USBInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBInTransferResult", V8WindowPartial::USBInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousInTransferPacket", V8WindowPartial::USBIsochronousInTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousInTransferResult", V8WindowPartial::USBIsochronousInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousOutTransferPacket", V8WindowPartial::USBIsochronousOutTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousOutTransferResult", V8WindowPartial::USBIsochronousOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBOutTransferResult", V8WindowPartial::USBOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        attribute_configurations, arraysize(attribute_configurations));
  }

  if (RuntimeEnabledFeatures::AsyncCookiesEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "cookieStore", V8WindowPartial::cookieStoreAttributeGetterCallback, V8WindowPartial::cookieStoreAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "speechSynthesis", V8WindowPartial::speechSynthesisAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitRequestFileSystemMethodConfiguration[] = {
      {"webkitRequestFileSystem", V8WindowPartial::webkitRequestFileSystemMethodCallback, 3, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitRequestFileSystemMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitResolveLocalFileSystemURLMethodConfiguration[] = {
      {"webkitResolveLocalFileSystemURL", V8WindowPartial::webkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitResolveLocalFileSystemURLMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::DatabaseEnabled()) {
    const V8DOMConfiguration::MethodConfiguration openDatabaseMethodConfiguration[] = {
      {"openDatabase", V8WindowPartial::openDatabaseMethodCallback, 4, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : openDatabaseMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
}

void V8WindowPartial::installSensor(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeAbsoluteOrientationSensorConfiguration[] = {
      { "AbsoluteOrientationSensor", V8WindowPartial::AbsoluteOrientationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeAbsoluteOrientationSensorConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeAccelerometerConfiguration[] = {
      { "Accelerometer", V8WindowPartial::AccelerometerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeAccelerometerConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeGyroscopeConfiguration[] = {
      { "Gyroscope", V8WindowPartial::GyroscopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeGyroscopeConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeLinearAccelerationSensorConfiguration[] = {
      { "LinearAccelerationSensor", V8WindowPartial::LinearAccelerationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeLinearAccelerationSensorConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeOrientationSensorConfiguration[] = {
      { "OrientationSensor", V8WindowPartial::OrientationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeOrientationSensorConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeRelativeOrientationSensorConfiguration[] = {
      { "RelativeOrientationSensor", V8WindowPartial::RelativeOrientationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeRelativeOrientationSensorConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeSensorConfiguration[] = {
      { "Sensor", V8WindowPartial::SensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeSensorConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeSensorErrorEventConfiguration[] = {
      { "SensorErrorEvent", V8WindowPartial::SensorErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeSensorErrorEventConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
}

void V8WindowPartial::installSensor(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installSensor(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installBudgetQuery(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeBudgetStateConfiguration[] = {
    { "BudgetState", V8WindowPartial::BudgetStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeBudgetStateConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8WindowPartial::installBudgetQuery(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installBudgetQuery(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installGamepadExtensions(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeGamepadPoseConfiguration[] = {
    { "GamepadPose", V8WindowPartial::GamepadPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeGamepadPoseConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8WindowPartial::installGamepadExtensions(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installGamepadExtensions(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installWebLocksAPI(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeLockConfiguration[] = {
      { "Lock", V8WindowPartial::LockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeLockConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeLockManagerConfiguration[] = {
      { "LockManager", V8WindowPartial::LockManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeLockManagerConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
}

void V8WindowPartial::installWebLocksAPI(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebLocksAPI(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installMediaCapabilities(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeMediaCapabilitiesInfoConfiguration[] = {
    { "MediaCapabilitiesInfo", V8WindowPartial::MediaCapabilitiesInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMediaCapabilitiesInfoConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8WindowPartial::installMediaCapabilities(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installMediaCapabilities(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installPictureInPictureAPI(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributePictureInPictureWindowConfiguration[] = {
    { "PictureInPictureWindow", V8WindowPartial::PictureInPictureWindowConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributePictureInPictureWindowConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8WindowPartial::installPictureInPictureAPI(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installPictureInPictureAPI(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installWebVR(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeVRDisplayConfiguration[] = {
    { "VRDisplay", V8WindowPartial::VRDisplayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVRDisplayConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeVRDisplayCapabilitiesConfiguration[] = {
    { "VRDisplayCapabilities", V8WindowPartial::VRDisplayCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVRDisplayCapabilitiesConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeVRDisplayEventConfiguration[] = {
    { "VRDisplayEvent", V8WindowPartial::VRDisplayEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVRDisplayEventConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeVREyeParametersConfiguration[] = {
    { "VREyeParameters", V8WindowPartial::VREyeParametersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVREyeParametersConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeVRFrameDataConfiguration[] = {
    { "VRFrameData", V8WindowPartial::VRFrameDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVRFrameDataConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeVRPoseConfiguration[] = {
    { "VRPose", V8WindowPartial::VRPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVRPoseConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeVRStageParametersConfiguration[] = {
    { "VRStageParameters", V8WindowPartial::VRStageParametersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeVRStageParametersConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8WindowPartial::installWebVR(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebVR(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installAnimationWorklet(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  static const V8DOMConfiguration::AttributeConfiguration attributeWorkletAnimationConfiguration[] = {
    { "WorkletAnimation", V8WindowPartial::WorkletAnimationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeWorkletAnimationConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessoranimationWorkletConfiguration[] = {
      { "animationWorklet", V8WindowPartial::animationWorkletAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessoranimationWorkletConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
}

void V8WindowPartial::installAnimationWorklet(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installAnimationWorklet(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::installWebXR(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Window::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRConfiguration[] = {
      { "XR", V8WindowPartial::XRConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRCoordinateSystemConfiguration[] = {
      { "XRCoordinateSystem", V8WindowPartial::XRCoordinateSystemConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRCoordinateSystemConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRDeviceConfiguration[] = {
      { "XRDevice", V8WindowPartial::XRDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRDeviceConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRDevicePoseConfiguration[] = {
      { "XRDevicePose", V8WindowPartial::XRDevicePoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRDevicePoseConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRFrameOfReferenceConfiguration[] = {
      { "XRFrameOfReference", V8WindowPartial::XRFrameOfReferenceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRFrameOfReferenceConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRInputPoseConfiguration[] = {
      { "XRInputPose", V8WindowPartial::XRInputPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRInputPoseConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRInputSourceConfiguration[] = {
      { "XRInputSource", V8WindowPartial::XRInputSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRInputSourceConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRInputSourceEventConfiguration[] = {
      { "XRInputSourceEvent", V8WindowPartial::XRInputSourceEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRInputSourceEventConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRLayerConfiguration[] = {
      { "XRLayer", V8WindowPartial::XRLayerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRLayerConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRPresentationContextConfiguration[] = {
      { "XRPresentationContext", V8WindowPartial::XRPresentationContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRPresentationContextConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRPresentationFrameConfiguration[] = {
      { "XRPresentationFrame", V8WindowPartial::XRPresentationFrameConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRPresentationFrameConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRSessionConfiguration[] = {
      { "XRSession", V8WindowPartial::XRSessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRSessionConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRSessionEventConfiguration[] = {
      { "XRSessionEvent", V8WindowPartial::XRSessionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRSessionEventConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRStageBoundsConfiguration[] = {
      { "XRStageBounds", V8WindowPartial::XRStageBoundsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRStageBoundsConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRStageBoundsPointConfiguration[] = {
      { "XRStageBoundsPoint", V8WindowPartial::XRStageBoundsPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRStageBoundsPointConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRViewConfiguration[] = {
      { "XRView", V8WindowPartial::XRViewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRViewConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRViewportConfiguration[] = {
      { "XRViewport", V8WindowPartial::XRViewportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRViewportConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeXRWebGLLayerConfiguration[] = {
      { "XRWebGLLayer", V8WindowPartial::XRWebGLLayerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeXRWebGLLayerConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
}

void V8WindowPartial::installWebXR(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Window::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Window::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebXR(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());
  V8Window::InstallConditionalFeatures(
      context, world, instanceObject, prototypeObject, interfaceObject, interfaceTemplate);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());

  if (!instanceObject.IsEmpty()) {
    if (isSecureContext) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "caches", V8WindowPartial::cachesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instanceObject, prototypeObject, interfaceObject,
          signature, accessor_configurations,
          arraysize(accessor_configurations));
    }
    if (isSecureContext) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "AudioWorklet", V8WindowPartial::AudioWorkletConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "Cache", V8WindowPartial::CacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "CacheStorage", V8WindowPartial::CacheStorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "Clipboard", V8WindowPartial::ClipboardConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "Credential", V8WindowPartial::CredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "CredentialsContainer", V8WindowPartial::CredentialsContainerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "FederatedCredential", V8WindowPartial::FederatedCredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "MediaKeyMessageEvent", V8WindowPartial::MediaKeyMessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "MediaKeys", V8WindowPartial::MediaKeysConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "MediaKeySession", V8WindowPartial::MediaKeySessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "MediaKeyStatusMap", V8WindowPartial::MediaKeyStatusMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "MediaKeySystemAccess", V8WindowPartial::MediaKeySystemAccessConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "NavigationPreloadManager", V8WindowPartial::NavigationPreloadManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "PasswordCredential", V8WindowPartial::PasswordCredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "StorageManager", V8WindowPartial::StorageManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instanceObject, prototypeObject,
          attribute_configurations, arraysize(attribute_configurations));
      if (RuntimeEnabledFeatures::BudgetEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "BudgetService", V8WindowPartial::BudgetServiceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::KeyboardLockEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "Keyboard", V8WindowPartial::KeyboardConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::KeyboardMapEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "KeyboardLayoutMap", V8WindowPartial::KeyboardLayoutMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "PaymentAddress", V8WindowPartial::PaymentAddressConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
            { "PaymentRequest", V8WindowPartial::PaymentRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
            { "PaymentResponse", V8WindowPartial::PaymentResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SensorExtraClassesEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "AmbientLightSensor", V8WindowPartial::AmbientLightSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
            { "Magnetometer", V8WindowPartial::MagnetometerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebAuthEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "AuthenticatorAssertionResponse", V8WindowPartial::AuthenticatorAssertionResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
            { "AuthenticatorAttestationResponse", V8WindowPartial::AuthenticatorAttestationResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
            { "AuthenticatorResponse", V8WindowPartial::AuthenticatorResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
            { "PublicKeyCredential", V8WindowPartial::PublicKeyCredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebNFCEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "NFC", V8WindowPartial::NFCConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebUSBEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "USB", V8WindowPartial::USBConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
    }
  }

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
  }
}

void V8WindowPartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8Window::UpdateWrapperTypeInfo(
      &V8WindowPartial::installV8WindowTemplate,
      &V8WindowPartial::InstallRuntimeEnabledFeaturesImpl,
      &V8WindowPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8WindowPartial::InstallConditionalFeatures);
}

}  // namespace blink
