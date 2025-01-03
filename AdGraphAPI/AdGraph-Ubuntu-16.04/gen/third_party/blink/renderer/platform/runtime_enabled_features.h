// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef RuntimeEnabledFeatures_h
#define RuntimeEnabledFeatures_h

#include <string>

#include "third_party/blink/renderer/platform/platform_export.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"

namespace blink {

// A class that stores static enablers for all experimental features.

class PLATFORM_EXPORT RuntimeEnabledFeatures {
  STATIC_ONLY(RuntimeEnabledFeatures);
 public:
  class PLATFORM_EXPORT Backup {
   public:
    explicit Backup();
    void Restore();

   private:
    bool accelerated_2d_canvas_;
    bool accessibility_object_model_;
    bool allow_activation_delegation_attr_;
    bool allow_content_initiated_data_url_navigations_;
    bool animation_worklet_;
    bool async_clipboard_;
    bool async_cookies_;
    bool audio_output_devices_;
    bool audio_video_tracks_;
    bool audio_worklet_;
    bool automation_controlled_;
    bool autoplay_ignores_web_audio_;
    bool autoplay_muted_videos_;
    bool background_fetch_;
    bool background_video_track_optimization_;
    bool blink_gen_property_trees_;
    bool blink_runtime_call_stats_;
    bool bloated_renderer_detection_;
    bool block_credentialed_subresources_;
    bool blocking_downloads_in_sandbox_;
    bool block_meta_set_cookie_;
    bool budget_;
    bool budget_query_;
    bool cache_inline_script_code_;
    bool cache_style_sheet_with_media_queries_;
    bool canvas_2d_context_lost_restored_;
    bool canvas_2d_fixed_rendering_mode_;
    bool canvas_2d_image_chromium_;
    bool canvas_2d_scroll_path_into_view_;
    bool canvas_color_management_;
    bool canvas_hit_region_;
    bool canvas_image_smoothing_;
    bool click_retargetting_;
    bool client_hints_persistent_;
    bool client_placeholders_for_server_lo_fi_;
    bool composited_selection_update_;
    bool composite_opaque_fixed_position_;
    bool composite_opaque_scrollers_;
    bool compositor_touch_action_;
    bool computed_accessibility_info_;
    bool conic_gradient_;
    bool constructable_stylesheets_;
    bool context_menu_;
    bool cors_rfc_1918_;
    bool css_3_text_;
    bool css_additive_animations_;
    bool css_backdrop_filter_;
    bool css_display_contents_;
    bool css_focus_visible_;
    bool css_font_size_adjust_;
    bool css_hex_alpha_color_;
    bool css_in_body_does_not_block_paint_;
    bool css_independent_transform_properties_;
    bool css_layout_api_;
    bool css_mask_source_type_;
    bool css_matches_;
    bool css_offset_path_ray_;
    bool css_offset_path_ray_contain_;
    bool css_offset_position_anchor_;
    bool cssom_smooth_scroll_;
    bool css_overscroll_behavior_;
    bool css_paint_api_;
    bool css_paint_api_arguments_;
    bool css_part_pseudo_element_;
    bool css_pseudo_is_;
    bool css_scroll_snap_points_;
    bool css_snap_size_;
    bool css_transform_box_;
    bool css_typed_om_;
    bool css_variables_2_;
    bool css_viewport_;
    bool custom_element_default_style_;
    bool custom_elements_builtin_;
    bool custom_elements_v0_;
    bool custom_user_timing_;
    bool database_;
    bool decode_to_yuv_;
    bool deprecation_reporting_;
    bool desktop_capture_disable_local_echo_control_;
    bool device_memory_header_;
    bool disable_hardware_noise_suppression_;
    bool disable_paint_chunks_to_cc_layer_;
    bool disable_raster_invalidation_;
    bool display_cutout_viewport_fit_;
    bool display_none_iframe_creates_no_layout_object_;
    bool document_cookie_;
    bool document_domain_;
    bool document_write_;
    bool embedder_csp_enforcement_;
    bool encrypted_media_hdcp_policy_check_;
    bool event_timing_;
    bool exec_command_in_java_script_;
    bool expensive_background_timer_throttling_;
    bool experimental_content_security_policy_features_;
    bool experimental_hardware_echo_cancellation_;
    bool experimental_productivity_features_;
    bool experimental_v8_extras_;
    bool extended_image_bitmap_options_;
    bool extended_text_metrics_;
    bool extra_webgl_video_texture_metadata_;
    bool fast_mobile_scrolling_;
    bool feature_policy_autoplay_feature_;
    bool feature_policy_experimental_features_;
    bool feature_policy_for_permissions_;
    bool feature_policy_java_script_interface_;
    bool feature_policy_vibrate_feature_;
    bool fetch_request_cache_;
    bool fetch_request_keepalive_;
    bool fetch_request_signal_;
    bool file_system_;
    bool focus_options_;
    bool font_cache_scaling_;
    bool force_overlay_fullscreen_video_;
    bool force_taller_select_popup_;
    bool form_data_event_;
    bool fractional_mouse_event_;
    bool fractional_mouse_type_pointer_event_;
    bool fractional_scroll_offsets_;
    bool framebusting_needs_same_origin_or_user_gesture_;
    bool frames_timing_function_;
    bool fullscreen_options_;
    bool fullscreen_unprefixed_;
    bool gamepad_extensions_;
    bool gamepad_vibration_;
    bool heap_compaction_;
    bool heap_incremental_marking_;
    bool heap_incremental_marking_stress_;
    bool html_imports_;
    bool html_imports_style_application_;
    bool idb_observer_;
    bool idle_time_cold_mode_spell_checking_;
    bool image_decoding_attribute_;
    bool image_orientation_;
    bool implicit_root_scroller_;
    bool incremental_shadow_dom_;
    bool inert_attribute_;
    bool input_multiple_fields_ui_;
    bool installed_app_;
    bool intersection_observer_geometry_mapper_;
    bool intersection_observer_v_2_;
    bool js_image_decode_;
    bool keyboard_lock_;
    bool keyboard_map_;
    bool lang_attribute_aware_form_control_ui_;
    bool layered_api_;
    bool layout_ng_;
    bool layout_ng_block_fragmentation_;
    bool layout_ng_flex_box_;
    bool layout_ng_fragment_caching_;
    bool lazy_frame_loading_;
    bool lazy_initialize_media_controls_;
    bool lazy_parse_css_;
    bool loading_with_mojo_;
    bool long_task_observer_;
    bool long_task_v_2_;
    bool low_latency_canvas_;
    bool media_capabilities_;
    bool media_capabilities_encoding_info_;
    bool media_capture_;
    bool media_capture_depth_;
    bool media_capture_depth_video_kind_;
    bool media_capture_from_video_;
    bool media_cast_overlay_button_;
    bool media_controls_overlay_play_button_;
    bool media_document_download_button_;
    bool media_engagement_bypass_autoplay_policies_;
    bool media_query_shape_;
    bool media_session_;
    bool media_source_experimental_;
    bool media_source_new_abort_and_duration_;
    bool media_stream_track_content_hint_;
    bool middle_click_autoscroll_;
    bool mobile_layout_theme_;
    bool modern_media_controls_;
    bool module_dedicated_worker_;
    bool module_preload_;
    bool module_scripts_dynamic_import_;
    bool module_scripts_import_meta_url_;
    bool mojo_blob_ur_ls_;
    bool mojo_js_;
    bool mojo_js_test_;
    bool multiple_color_stop_positions_;
    bool navigator_content_utils_;
    bool navigator_device_memory_;
    bool net_info_downlink_;
    bool net_info_downlink_header_;
    bool net_info_downlink_max_;
    bool net_info_effective_type_;
    bool net_info_effective_type_header_;
    bool net_info_rtt_;
    bool net_info_rtt_header_;
    bool net_info_save_data_;
    bool network_service_;
    bool new_remote_playback_pipeline_;
    bool notification_constructor_;
    bool notification_content_image_;
    bool notification_inline_replies_;
    bool notifications_;
    bool nullable_document_domain_;
    bool off_main_thread_websocket_;
    bool offscreen_canvas_;
    bool offscreen_canvas_text_;
    bool on_device_change_;
    bool orientation_event_;
    bool origin_manifest_;
    bool origin_trials_;
    bool origin_trials_sample_api_;
    bool origin_trials_sample_api_implied_;
    bool out_of_blink_cors_;
    bool overflow_icons_for_media_controls_;
    bool overlay_scrollbars_;
    bool page_lifecycle_;
    bool page_popup_;
    bool paint_under_invalidation_checking_;
    bool partial_raster_invalidation_;
    bool passive_document_event_listeners_;
    bool pass_paint_visual_rect_to_compositor_;
    bool payment_app_;
    bool payment_details_modifier_data_;
    bool payment_request_;
    bool payment_request_basic_card_;
    bool performance_navigation_timing_2_;
    bool performance_paint_timing_;
    bool permission_delegation_;
    bool permissions_;
    bool permissions_request_revoke_;
    bool picture_in_picture_;
    bool picture_in_picture_api_;
    bool precise_memory_info_;
    bool preferred_image_raster_bounds_;
    bool prefixed_video_fullscreen_;
    bool preload_default_is_metadata_;
    bool preload_image_src_set_;
    bool presentation_;
    bool print_browser_;
    bool priority_hints_;
    bool push_messaging_;
    bool pwa_full_code_cache_;
    bool raster_inducing_scroll_;
    bool reduced_referrer_granularity_;
    bool remote_playback_;
    bool remote_playback_backend_;
    bool rendering_pipeline_throttling_;
    bool rendering_pipeline_throttling_loading_iframes_;
    bool render_unicode_control_characters_;
    bool reporting_observer_;
    bool require_css_extension_for_file_;
    bool resize_observer_;
    bool resource_load_scheduler_;
    bool restrict_app_cache_to_secure_contexts_;
    bool restrict_can_request_url_character_set_;
    bool root_layer_scrolling_;
    bool rtc_peer_connection_id_;
    bool rtc_rtp_sender_parameters_;
    bool rtc_unified_plan_;
    bool rtc_unified_plan_by_default_;
    bool scripted_speech_;
    bool scroll_anchor_serialization_;
    bool scroll_customization_;
    bool scroll_top_left_interop_;
    bool sec_metadata_;
    bool send_beacon_throw_for_blob_with_non_simple_type_;
    bool send_mouse_events_disabled_form_controls_;
    bool sensor_;
    bool sensor_extra_classes_;
    bool server_timing_;
    bool service_worker_script_full_code_cache_;
    bool service_worker_update_via_cache_;
    bool set_root_scroller_;
    bool shadow_dom_v0_;
    bool shadow_piercing_descendant_combinator_;
    bool shape_detection_;
    bool shared_array_buffer_;
    bool shared_worker_;
    bool signature_based_integrity_;
    bool slimming_paint_v_175_;
    bool slimming_paint_v_2_;
    bool slot_in_flat_tree_;
    bool smil_;
    bool smooth_scroll_js_intervention_;
    bool stable_blink_features_;
    bool stacked_css_property_animations_;
    bool stop_in_background_;
    bool stop_loading_in_background_;
    bool stop_non_timers_in_background_;
    bool timer_throttling_for_background_tabs_;
    bool timer_throttling_for_hidden_frames_;
    bool touch_event_feature_detection_;
    bool touchpad_and_wheel_scroll_latching_;
    bool track_layout_passes_per_block_;
    bool trusted_dom_types_;
    bool trusted_events_default_action_;
    bool unclosed_form_control_is_invalid_;
    bool unified_touch_adjustment_;
    bool user_activation_v_2_;
    bool v8_context_snapshot_;
    bool v8_idle_tasks_;
    bool video_fullscreen_detection_;
    bool video_fullscreen_orientation_lock_;
    bool video_rotate_to_fullscreen_;
    bool visibility_collapse_column_;
    bool visibility_collapse_row_;
    bool visual_viewport_api_;
    bool wake_lock_;
    bool web_animations_api_;
    bool web_animations_svg_;
    bool web_assembly_streaming_;
    bool web_auth_;
    bool web_bluetooth_;
    bool web_fonts_cache_aware_timeout_adaptation_;
    bool webgl_draft_extensions_;
    bool webgl_image_chromium_;
    bool web_locks_api_;
    bool web_nfc_;
    bool web_rtc_vaapi_hwvp_8_encoding_;
    bool web_share_;
    bool web_usb_;
    bool web_usb_on_dedicated_and_shared_workers_;
    bool web_vr_;
    bool web_vtt_regions_;
    bool web_xr_;
    bool web_xr_gamepad_support_;
    bool web_xr_hit_test_;
    bool worker_nosniff_block_;
    bool worker_nosniff_warn_;
    bool worklet_;
    bool work_stealing_in_script_runner_;
    bool xslt_;
  };

  static void SetStableFeaturesEnabled(bool);
  static void SetExperimentalFeaturesEnabled(bool);
  static void SetTestFeaturesEnabled(bool);
  static void SetOriginTrialControlledFeaturesEnabled(bool);

  static void SetFeatureEnabledFromString(const std::string& name, bool enabled);

  static void SetAccelerated2dCanvasEnabled(bool enabled) { is_accelerated_2d_canvas_enabled_ = enabled; }
  static bool Accelerated2dCanvasEnabled() { return is_accelerated_2d_canvas_enabled_; }

  static void SetAccessibilityObjectModelEnabled(bool enabled) { is_accessibility_object_model_enabled_ = enabled; }
  static bool AccessibilityObjectModelEnabled() { return is_accessibility_object_model_enabled_; }

  static void SetAllowActivationDelegationAttrEnabled(bool enabled) { is_allow_activation_delegation_attr_enabled_ = enabled; }
  static bool AllowActivationDelegationAttrEnabled() { return is_allow_activation_delegation_attr_enabled_; }

  static void SetAllowContentInitiatedDataUrlNavigationsEnabled(bool enabled) { is_allow_content_initiated_data_url_navigations_enabled_ = enabled; }
  static bool AllowContentInitiatedDataUrlNavigationsEnabled() { return is_allow_content_initiated_data_url_navigations_enabled_; }

  static void SetAsyncClipboardEnabled(bool enabled) { is_async_clipboard_enabled_ = enabled; }
  static bool AsyncClipboardEnabled() { return is_async_clipboard_enabled_; }

  static void SetAsyncCookiesEnabled(bool enabled) { is_async_cookies_enabled_ = enabled; }
  static bool AsyncCookiesEnabled() { return is_async_cookies_enabled_; }

  static void SetAudioOutputDevicesEnabled(bool enabled) { is_audio_output_devices_enabled_ = enabled; }
  static bool AudioOutputDevicesEnabled() { return is_audio_output_devices_enabled_; }

  static void SetAudioVideoTracksEnabled(bool enabled) { is_audio_video_tracks_enabled_ = enabled; }
  static bool AudioVideoTracksEnabled() { return is_audio_video_tracks_enabled_; }

  static void SetAudioWorkletEnabled(bool enabled) { is_audio_worklet_enabled_ = enabled; }
  static bool AudioWorkletEnabled() { return is_audio_worklet_enabled_ && is_worklet_enabled_; }

  static void SetAutomationControlledEnabled(bool enabled) { is_automation_controlled_enabled_ = enabled; }
  static bool AutomationControlledEnabled() { return is_automation_controlled_enabled_; }

  static void SetAutoplayIgnoresWebAudioEnabled(bool enabled) { is_autoplay_ignores_web_audio_enabled_ = enabled; }
  static bool AutoplayIgnoresWebAudioEnabled() { return is_autoplay_ignores_web_audio_enabled_; }

  static void SetAutoplayMutedVideosEnabled(bool enabled) { is_autoplay_muted_videos_enabled_ = enabled; }
  static bool AutoplayMutedVideosEnabled() { return is_autoplay_muted_videos_enabled_; }

  static void SetBackgroundFetchEnabled(bool enabled) { is_background_fetch_enabled_ = enabled; }
  static bool BackgroundFetchEnabled() { return is_background_fetch_enabled_; }

  static void SetBackgroundVideoTrackOptimizationEnabled(bool enabled) { is_background_video_track_optimization_enabled_ = enabled; }
  static bool BackgroundVideoTrackOptimizationEnabled() { return is_background_video_track_optimization_enabled_; }

  static void SetBlinkGenPropertyTreesEnabled(bool enabled) { is_blink_gen_property_trees_enabled_ = enabled; }
  static bool BlinkGenPropertyTreesEnabled() { return is_blink_gen_property_trees_enabled_; }

  static void SetBlinkRuntimeCallStatsEnabled(bool enabled) { is_blink_runtime_call_stats_enabled_ = enabled; }
  static bool BlinkRuntimeCallStatsEnabled() { return is_blink_runtime_call_stats_enabled_; }

  static void SetBloatedRendererDetectionEnabled(bool enabled) { is_bloated_renderer_detection_enabled_ = enabled; }
  static bool BloatedRendererDetectionEnabled() { return is_bloated_renderer_detection_enabled_; }

  static void SetBlockCredentialedSubresourcesEnabled(bool enabled) { is_block_credentialed_subresources_enabled_ = enabled; }
  static bool BlockCredentialedSubresourcesEnabled() { return is_block_credentialed_subresources_enabled_; }

  static void SetBlockingDownloadsInSandboxEnabled(bool enabled) { is_blocking_downloads_in_sandbox_enabled_ = enabled; }
  static bool BlockingDownloadsInSandboxEnabled() { return is_blocking_downloads_in_sandbox_enabled_; }

  static void SetBlockMetaSetCookieEnabled(bool enabled) { is_block_meta_set_cookie_enabled_ = enabled; }
  static bool BlockMetaSetCookieEnabled() { return is_block_meta_set_cookie_enabled_; }

  static void SetBudgetEnabled(bool enabled) { is_budget_enabled_ = enabled; }
  static bool BudgetEnabled() { return is_budget_enabled_; }

  static void SetCacheInlineScriptCodeEnabled(bool enabled) { is_cache_inline_script_code_enabled_ = enabled; }
  static bool CacheInlineScriptCodeEnabled() { return is_cache_inline_script_code_enabled_; }

  static void SetCacheStyleSheetWithMediaQueriesEnabled(bool enabled) { is_cache_style_sheet_with_media_queries_enabled_ = enabled; }
  static bool CacheStyleSheetWithMediaQueriesEnabled() { return is_cache_style_sheet_with_media_queries_enabled_; }

  static void SetCanvas2dContextLostRestoredEnabled(bool enabled) { is_canvas_2d_context_lost_restored_enabled_ = enabled; }
  static bool Canvas2dContextLostRestoredEnabled() { return is_canvas_2d_context_lost_restored_enabled_; }

  static void SetCanvas2dFixedRenderingModeEnabled(bool enabled) { is_canvas_2d_fixed_rendering_mode_enabled_ = enabled; }
  static bool Canvas2dFixedRenderingModeEnabled() { return is_canvas_2d_fixed_rendering_mode_enabled_; }

  static void SetCanvas2dImageChromiumEnabled(bool enabled) { is_canvas_2d_image_chromium_enabled_ = enabled; }
  static bool Canvas2dImageChromiumEnabled() { return is_canvas_2d_image_chromium_enabled_; }

  static void SetCanvas2dScrollPathIntoViewEnabled(bool enabled) { is_canvas_2d_scroll_path_into_view_enabled_ = enabled; }
  static bool Canvas2dScrollPathIntoViewEnabled() { return is_canvas_2d_scroll_path_into_view_enabled_; }

  static void SetCanvasColorManagementEnabled(bool enabled) { is_canvas_color_management_enabled_ = enabled; }
  static bool CanvasColorManagementEnabled() { return is_canvas_color_management_enabled_; }

  static void SetCanvasHitRegionEnabled(bool enabled) { is_canvas_hit_region_enabled_ = enabled; }
  static bool CanvasHitRegionEnabled() { return is_canvas_hit_region_enabled_; }

  static void SetCanvasImageSmoothingEnabled(bool enabled) { is_canvas_image_smoothing_enabled_ = enabled; }
  static bool CanvasImageSmoothingEnabled() { return is_canvas_image_smoothing_enabled_; }

  static void SetClickRetargettingEnabled(bool enabled) { is_click_retargetting_enabled_ = enabled; }
  static bool ClickRetargettingEnabled() { return is_click_retargetting_enabled_; }

  static void SetClientHintsPersistentEnabled(bool enabled) { is_client_hints_persistent_enabled_ = enabled; }
  static bool ClientHintsPersistentEnabled() { return is_client_hints_persistent_enabled_; }

  static void SetClientPlaceholdersForServerLoFiEnabled(bool enabled) { is_client_placeholders_for_server_lo_fi_enabled_ = enabled; }
  static bool ClientPlaceholdersForServerLoFiEnabled() { return is_client_placeholders_for_server_lo_fi_enabled_; }

  static void SetCompositedSelectionUpdateEnabled(bool enabled) { is_composited_selection_update_enabled_ = enabled; }
  static bool CompositedSelectionUpdateEnabled() { return is_composited_selection_update_enabled_; }

  static void SetCompositeOpaqueFixedPositionEnabled(bool enabled) { is_composite_opaque_fixed_position_enabled_ = enabled; }
  static bool CompositeOpaqueFixedPositionEnabled() { return is_composite_opaque_fixed_position_enabled_; }

  static void SetCompositeOpaqueScrollersEnabled(bool enabled) { is_composite_opaque_scrollers_enabled_ = enabled; }
  static bool CompositeOpaqueScrollersEnabled() { return is_composite_opaque_scrollers_enabled_; }

  static void SetCompositorTouchActionEnabled(bool enabled) { is_compositor_touch_action_enabled_ = enabled; }
  static bool CompositorTouchActionEnabled() { return is_compositor_touch_action_enabled_; }

  static void SetComputedAccessibilityInfoEnabled(bool enabled) { is_computed_accessibility_info_enabled_ = enabled; }
  static bool ComputedAccessibilityInfoEnabled() { return is_computed_accessibility_info_enabled_; }

  static void SetConicGradientEnabled(bool enabled) { is_conic_gradient_enabled_ = enabled; }
  static bool ConicGradientEnabled() { return is_conic_gradient_enabled_; }

  static void SetConstructableStylesheetsEnabled(bool enabled) { is_constructable_stylesheets_enabled_ = enabled; }
  static bool ConstructableStylesheetsEnabled() { return is_constructable_stylesheets_enabled_; }

  static void SetContextMenuEnabled(bool enabled) { is_context_menu_enabled_ = enabled; }
  static bool ContextMenuEnabled() { return is_context_menu_enabled_; }

  static void SetCorsRFC1918Enabled(bool enabled) { is_cors_rfc_1918_enabled_ = enabled; }
  static bool CorsRFC1918Enabled() { return is_cors_rfc_1918_enabled_; }

  static void SetCSS3TextEnabled(bool enabled) { is_css_3_text_enabled_ = enabled; }
  static bool CSS3TextEnabled() { return is_css_3_text_enabled_; }

  static void SetCSSAdditiveAnimationsEnabled(bool enabled) { is_css_additive_animations_enabled_ = enabled; }
  static bool CSSAdditiveAnimationsEnabled() { return is_css_additive_animations_enabled_ && is_stacked_css_property_animations_enabled_; }

  static void SetCSSBackdropFilterEnabled(bool enabled) { is_css_backdrop_filter_enabled_ = enabled; }
  static bool CSSBackdropFilterEnabled() { return is_css_backdrop_filter_enabled_; }

  static void SetCSSDisplayContentsEnabled(bool enabled) { is_css_display_contents_enabled_ = enabled; }
  static bool CSSDisplayContentsEnabled() { return is_css_display_contents_enabled_; }

  static void SetCSSFocusVisibleEnabled(bool enabled) { is_css_focus_visible_enabled_ = enabled; }
  static bool CSSFocusVisibleEnabled() { return is_css_focus_visible_enabled_; }

  static void SetCSSFontSizeAdjustEnabled(bool enabled) { is_css_font_size_adjust_enabled_ = enabled; }
  static bool CSSFontSizeAdjustEnabled() { return is_css_font_size_adjust_enabled_; }

  static void SetCSSHexAlphaColorEnabled(bool enabled) { is_css_hex_alpha_color_enabled_ = enabled; }
  static bool CSSHexAlphaColorEnabled() { return is_css_hex_alpha_color_enabled_; }

  static void SetCSSInBodyDoesNotBlockPaintEnabled(bool enabled) { is_css_in_body_does_not_block_paint_enabled_ = enabled; }
  static bool CSSInBodyDoesNotBlockPaintEnabled() { return is_css_in_body_does_not_block_paint_enabled_; }

  static void SetCSSIndependentTransformPropertiesEnabled(bool enabled) { is_css_independent_transform_properties_enabled_ = enabled; }
  static bool CSSIndependentTransformPropertiesEnabled() { return is_css_independent_transform_properties_enabled_; }

  static void SetCSSLayoutAPIEnabled(bool enabled) { is_css_layout_api_enabled_ = enabled; }
  static bool CSSLayoutAPIEnabled() { return is_css_layout_api_enabled_; }

  static void SetCSSMaskSourceTypeEnabled(bool enabled) { is_css_mask_source_type_enabled_ = enabled; }
  static bool CSSMaskSourceTypeEnabled() { return is_css_mask_source_type_enabled_; }

  static void SetCSSMatchesEnabled(bool enabled) { is_css_matches_enabled_ = enabled; }
  static bool CSSMatchesEnabled() { return is_css_matches_enabled_; }

  static void SetCSSOffsetPathRayEnabled(bool enabled) { is_css_offset_path_ray_enabled_ = enabled; }
  static bool CSSOffsetPathRayEnabled() { return is_css_offset_path_ray_enabled_; }

  static void SetCSSOffsetPathRayContainEnabled(bool enabled) { is_css_offset_path_ray_contain_enabled_ = enabled; }
  static bool CSSOffsetPathRayContainEnabled() { return is_css_offset_path_ray_contain_enabled_; }

  static void SetCSSOffsetPositionAnchorEnabled(bool enabled) { is_css_offset_position_anchor_enabled_ = enabled; }
  static bool CSSOffsetPositionAnchorEnabled() { return is_css_offset_position_anchor_enabled_; }

  static void SetCSSOMSmoothScrollEnabled(bool enabled) { is_cssom_smooth_scroll_enabled_ = enabled; }
  static bool CSSOMSmoothScrollEnabled() { return is_cssom_smooth_scroll_enabled_; }

  static void SetCSSOverscrollBehaviorEnabled(bool enabled) { is_css_overscroll_behavior_enabled_ = enabled; }
  static bool CSSOverscrollBehaviorEnabled() { return is_css_overscroll_behavior_enabled_; }

  static void SetCSSPaintAPIEnabled(bool enabled) { is_css_paint_api_enabled_ = enabled; }
  static bool CSSPaintAPIEnabled() { return is_css_paint_api_enabled_ && is_worklet_enabled_; }

  static void SetCSSPaintAPIArgumentsEnabled(bool enabled) { is_css_paint_api_arguments_enabled_ = enabled; }
  static bool CSSPaintAPIArgumentsEnabled() { return is_css_paint_api_arguments_enabled_ && is_css_paint_api_enabled_; }

  static void SetCSSPartPseudoElementEnabled(bool enabled) { is_css_part_pseudo_element_enabled_ = enabled; }
  static bool CSSPartPseudoElementEnabled() { return is_css_part_pseudo_element_enabled_; }

  static void SetCSSPseudoISEnabled(bool enabled) { is_css_pseudo_is_enabled_ = enabled; }
  static bool CSSPseudoISEnabled() { return is_css_pseudo_is_enabled_; }

  static void SetCSSScrollSnapPointsEnabled(bool enabled) { is_css_scroll_snap_points_enabled_ = enabled; }
  static bool CSSScrollSnapPointsEnabled() { return is_css_scroll_snap_points_enabled_; }

  static void SetCSSSnapSizeEnabled(bool enabled) { is_css_snap_size_enabled_ = enabled; }
  static bool CSSSnapSizeEnabled() { return is_css_snap_size_enabled_; }

  static void SetCSSTransformBoxEnabled(bool enabled) { is_css_transform_box_enabled_ = enabled; }
  static bool CSSTransformBoxEnabled() { return is_css_transform_box_enabled_; }

  static void SetCSSTypedOMEnabled(bool enabled) { is_css_typed_om_enabled_ = enabled; }
  static bool CSSTypedOMEnabled() { return is_css_typed_om_enabled_; }

  static void SetCSSVariables2Enabled(bool enabled) { is_css_variables_2_enabled_ = enabled; }
  static bool CSSVariables2Enabled() { return is_css_variables_2_enabled_; }

  static void SetCSSViewportEnabled(bool enabled) { is_css_viewport_enabled_ = enabled; }
  static bool CSSViewportEnabled() { return is_css_viewport_enabled_; }

  static void SetCustomElementDefaultStyleEnabled(bool enabled) { is_custom_element_default_style_enabled_ = enabled; }
  static bool CustomElementDefaultStyleEnabled() { return is_custom_element_default_style_enabled_; }

  static void SetCustomElementsBuiltinEnabled(bool enabled) { is_custom_elements_builtin_enabled_ = enabled; }
  static bool CustomElementsBuiltinEnabled() { return is_custom_elements_builtin_enabled_; }

  static void SetCustomElementsV0Enabled(bool enabled) { is_custom_elements_v0_enabled_ = enabled; }
  static bool CustomElementsV0Enabled() { return is_custom_elements_v0_enabled_; }

  static void SetCustomUserTimingEnabled(bool enabled) { is_custom_user_timing_enabled_ = enabled; }
  static bool CustomUserTimingEnabled() { return is_custom_user_timing_enabled_; }

  static void SetDatabaseEnabled(bool enabled) { is_database_enabled_ = enabled; }
  static bool DatabaseEnabled() { return is_database_enabled_; }

  static void SetDecodeToYUVEnabled(bool enabled) { is_decode_to_yuv_enabled_ = enabled; }
  static bool DecodeToYUVEnabled() { return is_decode_to_yuv_enabled_; }

  static void SetDeprecationReportingEnabled(bool enabled) { is_deprecation_reporting_enabled_ = enabled; }
  static bool DeprecationReportingEnabled() { return is_deprecation_reporting_enabled_; }

  static void SetDesktopCaptureDisableLocalEchoControlEnabled(bool enabled) { is_desktop_capture_disable_local_echo_control_enabled_ = enabled; }
  static bool DesktopCaptureDisableLocalEchoControlEnabled() { return is_desktop_capture_disable_local_echo_control_enabled_; }

  static void SetDeviceMemoryHeaderEnabled(bool enabled) { is_device_memory_header_enabled_ = enabled; }
  static bool DeviceMemoryHeaderEnabled() { return is_device_memory_header_enabled_; }

  static void SetDisablePaintChunksToCcLayerEnabled(bool enabled) { is_disable_paint_chunks_to_cc_layer_enabled_ = enabled; }
  static bool DisablePaintChunksToCcLayerEnabled() { return is_disable_paint_chunks_to_cc_layer_enabled_; }

  static void SetDisableRasterInvalidationEnabled(bool enabled) { is_disable_raster_invalidation_enabled_ = enabled; }
  static bool DisableRasterInvalidationEnabled() { return is_disable_raster_invalidation_enabled_; }

  static void SetDisplayCutoutViewportFitEnabled(bool enabled) { is_display_cutout_viewport_fit_enabled_ = enabled; }
  static bool DisplayCutoutViewportFitEnabled() { return is_display_cutout_viewport_fit_enabled_; }

  static void SetDisplayNoneIFrameCreatesNoLayoutObjectEnabled(bool enabled) { is_display_none_iframe_creates_no_layout_object_enabled_ = enabled; }
  static bool DisplayNoneIFrameCreatesNoLayoutObjectEnabled() { return is_display_none_iframe_creates_no_layout_object_enabled_; }

  static void SetDocumentCookieEnabled(bool enabled) { is_document_cookie_enabled_ = enabled; }
  static bool DocumentCookieEnabled() { return is_document_cookie_enabled_; }

  static void SetDocumentDomainEnabled(bool enabled) { is_document_domain_enabled_ = enabled; }
  static bool DocumentDomainEnabled() { return is_document_domain_enabled_; }

  static void SetDocumentWriteEnabled(bool enabled) { is_document_write_enabled_ = enabled; }
  static bool DocumentWriteEnabled() { return is_document_write_enabled_; }

  static void SetEmbedderCSPEnforcementEnabled(bool enabled) { is_embedder_csp_enforcement_enabled_ = enabled; }
  static bool EmbedderCSPEnforcementEnabled() { return is_embedder_csp_enforcement_enabled_; }

  static void SetEncryptedMediaHdcpPolicyCheckEnabled(bool enabled) { is_encrypted_media_hdcp_policy_check_enabled_ = enabled; }
  static bool EncryptedMediaHdcpPolicyCheckEnabled() { return is_encrypted_media_hdcp_policy_check_enabled_; }

  static void SetEventTimingEnabled(bool enabled) { is_event_timing_enabled_ = enabled; }
  static bool EventTimingEnabled() { return is_event_timing_enabled_; }

  static void SetExecCommandInJavaScriptEnabled(bool enabled) { is_exec_command_in_java_script_enabled_ = enabled; }
  static bool ExecCommandInJavaScriptEnabled() { return is_exec_command_in_java_script_enabled_; }

  static void SetExpensiveBackgroundTimerThrottlingEnabled(bool enabled) { is_expensive_background_timer_throttling_enabled_ = enabled; }
  static bool ExpensiveBackgroundTimerThrottlingEnabled() { return is_expensive_background_timer_throttling_enabled_; }

  static void SetExperimentalContentSecurityPolicyFeaturesEnabled(bool enabled) { is_experimental_content_security_policy_features_enabled_ = enabled; }
  static bool ExperimentalContentSecurityPolicyFeaturesEnabled() { return is_experimental_content_security_policy_features_enabled_; }

  static void SetExperimentalProductivityFeaturesEnabled(bool enabled) { is_experimental_productivity_features_enabled_ = enabled; }
  static bool ExperimentalProductivityFeaturesEnabled() { return is_experimental_productivity_features_enabled_; }

  static void SetExperimentalV8ExtrasEnabled(bool enabled) { is_experimental_v8_extras_enabled_ = enabled; }
  static bool ExperimentalV8ExtrasEnabled() { return is_experimental_v8_extras_enabled_; }

  static void SetExtendedImageBitmapOptionsEnabled(bool enabled) { is_extended_image_bitmap_options_enabled_ = enabled; }
  static bool ExtendedImageBitmapOptionsEnabled() { return is_extended_image_bitmap_options_enabled_; }

  static void SetExtendedTextMetricsEnabled(bool enabled) { is_extended_text_metrics_enabled_ = enabled; }
  static bool ExtendedTextMetricsEnabled() { return is_extended_text_metrics_enabled_; }

  static void SetExtraWebGLVideoTextureMetadataEnabled(bool enabled) { is_extra_webgl_video_texture_metadata_enabled_ = enabled; }
  static bool ExtraWebGLVideoTextureMetadataEnabled() { return is_extra_webgl_video_texture_metadata_enabled_; }

  static void SetFastMobileScrollingEnabled(bool enabled) { is_fast_mobile_scrolling_enabled_ = enabled; }
  static bool FastMobileScrollingEnabled() { return is_fast_mobile_scrolling_enabled_; }

  static void SetFeaturePolicyAutoplayFeatureEnabled(bool enabled) { is_feature_policy_autoplay_feature_enabled_ = enabled; }
  static bool FeaturePolicyAutoplayFeatureEnabled() { return is_feature_policy_autoplay_feature_enabled_; }

  static void SetFeaturePolicyExperimentalFeaturesEnabled(bool enabled) { is_feature_policy_experimental_features_enabled_ = enabled; }
  static bool FeaturePolicyExperimentalFeaturesEnabled() { return is_feature_policy_experimental_features_enabled_; }

  static void SetFeaturePolicyForPermissionsEnabled(bool enabled) { is_feature_policy_for_permissions_enabled_ = enabled; }
  static bool FeaturePolicyForPermissionsEnabled() { return is_feature_policy_for_permissions_enabled_; }

  static void SetFeaturePolicyJavaScriptInterfaceEnabled(bool enabled) { is_feature_policy_java_script_interface_enabled_ = enabled; }
  static bool FeaturePolicyJavaScriptInterfaceEnabled() { return is_feature_policy_java_script_interface_enabled_; }

  static void SetFeaturePolicyVibrateFeatureEnabled(bool enabled) { is_feature_policy_vibrate_feature_enabled_ = enabled; }
  static bool FeaturePolicyVibrateFeatureEnabled() { return is_feature_policy_vibrate_feature_enabled_; }

  static void SetFetchRequestCacheEnabled(bool enabled) { is_fetch_request_cache_enabled_ = enabled; }
  static bool FetchRequestCacheEnabled() { return is_fetch_request_cache_enabled_; }

  static void SetFetchRequestKeepaliveEnabled(bool enabled) { is_fetch_request_keepalive_enabled_ = enabled; }
  static bool FetchRequestKeepaliveEnabled() { return is_fetch_request_keepalive_enabled_; }

  static void SetFetchRequestSignalEnabled(bool enabled) { is_fetch_request_signal_enabled_ = enabled; }
  static bool FetchRequestSignalEnabled() { return is_fetch_request_signal_enabled_; }

  static void SetFileSystemEnabled(bool enabled) { is_file_system_enabled_ = enabled; }
  static bool FileSystemEnabled() { return is_file_system_enabled_; }

  static void SetFocusOptionsEnabled(bool enabled) { is_focus_options_enabled_ = enabled; }
  static bool FocusOptionsEnabled() { return is_focus_options_enabled_; }

  static void SetFontCacheScalingEnabled(bool enabled) { is_font_cache_scaling_enabled_ = enabled; }
  static bool FontCacheScalingEnabled() { return is_font_cache_scaling_enabled_; }

  static void SetForceOverlayFullscreenVideoEnabled(bool enabled) { is_force_overlay_fullscreen_video_enabled_ = enabled; }
  static bool ForceOverlayFullscreenVideoEnabled() { return is_force_overlay_fullscreen_video_enabled_; }

  static void SetForceTallerSelectPopupEnabled(bool enabled) { is_force_taller_select_popup_enabled_ = enabled; }
  static bool ForceTallerSelectPopupEnabled() { return is_force_taller_select_popup_enabled_; }

  static void SetFormDataEventEnabled(bool enabled) { is_form_data_event_enabled_ = enabled; }
  static bool FormDataEventEnabled() { return is_form_data_event_enabled_; }

  static void SetFractionalMouseEventEnabled(bool enabled) { is_fractional_mouse_event_enabled_ = enabled; }
  static bool FractionalMouseEventEnabled() { return is_fractional_mouse_event_enabled_; }

  static void SetFractionalMouseTypePointerEventEnabled(bool enabled) { is_fractional_mouse_type_pointer_event_enabled_ = enabled; }
  static bool FractionalMouseTypePointerEventEnabled() { return is_fractional_mouse_type_pointer_event_enabled_; }

  static void SetFractionalScrollOffsetsEnabled(bool enabled) { is_fractional_scroll_offsets_enabled_ = enabled; }
  static bool FractionalScrollOffsetsEnabled() { return is_fractional_scroll_offsets_enabled_; }

  static void SetFramebustingNeedsSameOriginOrUserGestureEnabled(bool enabled) { is_framebusting_needs_same_origin_or_user_gesture_enabled_ = enabled; }
  static bool FramebustingNeedsSameOriginOrUserGestureEnabled() { return is_framebusting_needs_same_origin_or_user_gesture_enabled_; }

  static void SetFramesTimingFunctionEnabled(bool enabled) { is_frames_timing_function_enabled_ = enabled; }
  static bool FramesTimingFunctionEnabled() { return is_frames_timing_function_enabled_; }

  static void SetFullscreenOptionsEnabled(bool enabled) { is_fullscreen_options_enabled_ = enabled; }
  static bool FullscreenOptionsEnabled() { return is_fullscreen_options_enabled_; }

  static void SetFullscreenUnprefixedEnabled(bool enabled) { is_fullscreen_unprefixed_enabled_ = enabled; }
  static bool FullscreenUnprefixedEnabled() { return is_fullscreen_unprefixed_enabled_; }

  static void SetGamepadVibrationEnabled(bool enabled) { is_gamepad_vibration_enabled_ = enabled; }
  static bool GamepadVibrationEnabled() { return is_gamepad_vibration_enabled_; }

  static void SetHeapCompactionEnabled(bool enabled) { is_heap_compaction_enabled_ = enabled; }
  static bool HeapCompactionEnabled() { return is_heap_compaction_enabled_; }

  static void SetHeapIncrementalMarkingEnabled(bool enabled) { is_heap_incremental_marking_enabled_ = enabled; }
  static bool HeapIncrementalMarkingEnabled() { return is_heap_incremental_marking_enabled_; }

  static void SetHeapIncrementalMarkingStressEnabled(bool enabled) { is_heap_incremental_marking_stress_enabled_ = enabled; }
  static bool HeapIncrementalMarkingStressEnabled() { return is_heap_incremental_marking_stress_enabled_; }

  static void SetHTMLImportsEnabled(bool enabled) { is_html_imports_enabled_ = enabled; }
  static bool HTMLImportsEnabled() { return is_html_imports_enabled_; }

  static void SetHTMLImportsStyleApplicationEnabled(bool enabled) { is_html_imports_style_application_enabled_ = enabled; }
  static bool HTMLImportsStyleApplicationEnabled() { return is_html_imports_style_application_enabled_; }

  static void SetIDBObserverEnabled(bool enabled) { is_idb_observer_enabled_ = enabled; }
  static bool IDBObserverEnabled() { return is_idb_observer_enabled_; }

  static void SetIdleTimeColdModeSpellCheckingEnabled(bool enabled) { is_idle_time_cold_mode_spell_checking_enabled_ = enabled; }
  static bool IdleTimeColdModeSpellCheckingEnabled() { return is_idle_time_cold_mode_spell_checking_enabled_; }

  static void SetImageDecodingAttributeEnabled(bool enabled) { is_image_decoding_attribute_enabled_ = enabled; }
  static bool ImageDecodingAttributeEnabled() { return is_image_decoding_attribute_enabled_; }

  static void SetImageOrientationEnabled(bool enabled) { is_image_orientation_enabled_ = enabled; }
  static bool ImageOrientationEnabled() { return is_image_orientation_enabled_; }

  static void SetImplicitRootScrollerEnabled(bool enabled) { is_implicit_root_scroller_enabled_ = enabled; }
  static bool ImplicitRootScrollerEnabled() { return is_implicit_root_scroller_enabled_; }

  static void SetIncrementalShadowDOMEnabled(bool enabled) { is_incremental_shadow_dom_enabled_ = enabled; }
  static bool IncrementalShadowDOMEnabled() { return is_incremental_shadow_dom_enabled_; }

  static void SetInertAttributeEnabled(bool enabled) { is_inert_attribute_enabled_ = enabled; }
  static bool InertAttributeEnabled() { return is_inert_attribute_enabled_; }

  static void SetInputMultipleFieldsUIEnabled(bool enabled) { is_input_multiple_fields_ui_enabled_ = enabled; }
  static bool InputMultipleFieldsUIEnabled() { return is_input_multiple_fields_ui_enabled_; }

  static void SetIntersectionObserverGeometryMapperEnabled(bool enabled) { is_intersection_observer_geometry_mapper_enabled_ = enabled; }
  static bool IntersectionObserverGeometryMapperEnabled() { return is_intersection_observer_geometry_mapper_enabled_; }

  static void SetIntersectionObserverV2Enabled(bool enabled) { is_intersection_observer_v_2_enabled_ = enabled; }
  static bool IntersectionObserverV2Enabled() { return is_intersection_observer_v_2_enabled_; }

  static void SetJSImageDecodeEnabled(bool enabled) { is_js_image_decode_enabled_ = enabled; }
  static bool JSImageDecodeEnabled() { return is_js_image_decode_enabled_; }

  static void SetKeyboardLockEnabled(bool enabled) { is_keyboard_lock_enabled_ = enabled; }
  static bool KeyboardLockEnabled() { return is_keyboard_lock_enabled_; }

  static void SetKeyboardMapEnabled(bool enabled) { is_keyboard_map_enabled_ = enabled; }
  static bool KeyboardMapEnabled() { return is_keyboard_map_enabled_; }

  static void SetLangAttributeAwareFormControlUIEnabled(bool enabled) { is_lang_attribute_aware_form_control_ui_enabled_ = enabled; }
  static bool LangAttributeAwareFormControlUIEnabled() { return is_lang_attribute_aware_form_control_ui_enabled_; }

  static void SetLayeredAPIEnabled(bool enabled) { is_layered_api_enabled_ = enabled; }
  static bool LayeredAPIEnabled() { return is_layered_api_enabled_ || is_experimental_productivity_features_enabled_; }

  static void SetLayoutNGEnabled(bool enabled) { is_layout_ng_enabled_ = enabled; }
  static bool LayoutNGEnabled() { return is_layout_ng_enabled_ || is_layout_ng_block_fragmentation_enabled_ || is_layout_ng_flex_box_enabled_; }

  static void SetLayoutNGBlockFragmentationEnabled(bool enabled) { is_layout_ng_block_fragmentation_enabled_ = enabled; }
  static bool LayoutNGBlockFragmentationEnabled() { return is_layout_ng_block_fragmentation_enabled_; }

  static void SetLayoutNGFlexBoxEnabled(bool enabled) { is_layout_ng_flex_box_enabled_ = enabled; }
  static bool LayoutNGFlexBoxEnabled() { return is_layout_ng_flex_box_enabled_; }

  static void SetLayoutNGFragmentCachingEnabled(bool enabled) { is_layout_ng_fragment_caching_enabled_ = enabled; }
  static bool LayoutNGFragmentCachingEnabled() { return is_layout_ng_fragment_caching_enabled_; }

  static void SetLazyFrameLoadingEnabled(bool enabled) { is_lazy_frame_loading_enabled_ = enabled; }
  static bool LazyFrameLoadingEnabled() { return is_lazy_frame_loading_enabled_; }

  static void SetLazyInitializeMediaControlsEnabled(bool enabled) { is_lazy_initialize_media_controls_enabled_ = enabled; }
  static bool LazyInitializeMediaControlsEnabled() { return is_lazy_initialize_media_controls_enabled_; }

  static void SetLazyParseCSSEnabled(bool enabled) { is_lazy_parse_css_enabled_ = enabled; }
  static bool LazyParseCSSEnabled() { return is_lazy_parse_css_enabled_; }

  static void SetLoadingWithMojoEnabled(bool enabled) { is_loading_with_mojo_enabled_ = enabled; }
  static bool LoadingWithMojoEnabled() { return is_loading_with_mojo_enabled_; }

  static void SetLongTaskObserverEnabled(bool enabled) { is_long_task_observer_enabled_ = enabled; }
  static bool LongTaskObserverEnabled() { return is_long_task_observer_enabled_; }

  static void SetLongTaskV2Enabled(bool enabled) { is_long_task_v_2_enabled_ = enabled; }
  static bool LongTaskV2Enabled() { return is_long_task_v_2_enabled_; }

  static void SetMediaCapabilitiesEncodingInfoEnabled(bool enabled) { is_media_capabilities_encoding_info_enabled_ = enabled; }
  static bool MediaCapabilitiesEncodingInfoEnabled() { return is_media_capabilities_encoding_info_enabled_; }

  static void SetMediaCaptureEnabled(bool enabled) { is_media_capture_enabled_ = enabled; }
  static bool MediaCaptureEnabled() { return is_media_capture_enabled_; }

  static void SetMediaCaptureDepthEnabled(bool enabled) { is_media_capture_depth_enabled_ = enabled; }
  static bool MediaCaptureDepthEnabled() { return is_media_capture_depth_enabled_; }

  static void SetMediaCaptureDepthVideoKindEnabled(bool enabled) { is_media_capture_depth_video_kind_enabled_ = enabled; }
  static bool MediaCaptureDepthVideoKindEnabled() { return is_media_capture_depth_video_kind_enabled_; }

  static void SetMediaCaptureFromVideoEnabled(bool enabled) { is_media_capture_from_video_enabled_ = enabled; }
  static bool MediaCaptureFromVideoEnabled() { return is_media_capture_from_video_enabled_; }

  static void SetMediaCastOverlayButtonEnabled(bool enabled) { is_media_cast_overlay_button_enabled_ = enabled; }
  static bool MediaCastOverlayButtonEnabled() { return is_media_cast_overlay_button_enabled_; }

  static void SetMediaControlsOverlayPlayButtonEnabled(bool enabled) { is_media_controls_overlay_play_button_enabled_ = enabled; }
  static bool MediaControlsOverlayPlayButtonEnabled() { return is_media_controls_overlay_play_button_enabled_; }

  static void SetMediaDocumentDownloadButtonEnabled(bool enabled) { is_media_document_download_button_enabled_ = enabled; }
  static bool MediaDocumentDownloadButtonEnabled() { return is_media_document_download_button_enabled_; }

  static void SetMediaEngagementBypassAutoplayPoliciesEnabled(bool enabled) { is_media_engagement_bypass_autoplay_policies_enabled_ = enabled; }
  static bool MediaEngagementBypassAutoplayPoliciesEnabled() { return is_media_engagement_bypass_autoplay_policies_enabled_; }

  static void SetMediaQueryShapeEnabled(bool enabled) { is_media_query_shape_enabled_ = enabled; }
  static bool MediaQueryShapeEnabled() { return is_media_query_shape_enabled_; }

  static void SetMediaSessionEnabled(bool enabled) { is_media_session_enabled_ = enabled; }
  static bool MediaSessionEnabled() { return is_media_session_enabled_; }

  static void SetMediaSourceExperimentalEnabled(bool enabled) { is_media_source_experimental_enabled_ = enabled; }
  static bool MediaSourceExperimentalEnabled() { return is_media_source_experimental_enabled_; }

  static void SetMediaSourceNewAbortAndDurationEnabled(bool enabled) { is_media_source_new_abort_and_duration_enabled_ = enabled; }
  static bool MediaSourceNewAbortAndDurationEnabled() { return is_media_source_new_abort_and_duration_enabled_; }

  static void SetMediaStreamTrackContentHintEnabled(bool enabled) { is_media_stream_track_content_hint_enabled_ = enabled; }
  static bool MediaStreamTrackContentHintEnabled() { return is_media_stream_track_content_hint_enabled_; }

  static void SetMiddleClickAutoscrollEnabled(bool enabled) { is_middle_click_autoscroll_enabled_ = enabled; }
  static bool MiddleClickAutoscrollEnabled() { return is_middle_click_autoscroll_enabled_; }

  static void SetMobileLayoutThemeEnabled(bool enabled) { is_mobile_layout_theme_enabled_ = enabled; }
  static bool MobileLayoutThemeEnabled() { return is_mobile_layout_theme_enabled_; }

  static void SetModernMediaControlsEnabled(bool enabled) { is_modern_media_controls_enabled_ = enabled; }
  static bool ModernMediaControlsEnabled() { return is_modern_media_controls_enabled_; }

  static void SetModuleDedicatedWorkerEnabled(bool enabled) { is_module_dedicated_worker_enabled_ = enabled; }
  static bool ModuleDedicatedWorkerEnabled() { return is_module_dedicated_worker_enabled_; }

  static void SetModulePreloadEnabled(bool enabled) { is_module_preload_enabled_ = enabled; }
  static bool ModulePreloadEnabled() { return is_module_preload_enabled_; }

  static void SetModuleScriptsDynamicImportEnabled(bool enabled) { is_module_scripts_dynamic_import_enabled_ = enabled; }
  static bool ModuleScriptsDynamicImportEnabled() { return is_module_scripts_dynamic_import_enabled_; }

  static void SetModuleScriptsImportMetaUrlEnabled(bool enabled) { is_module_scripts_import_meta_url_enabled_ = enabled; }
  static bool ModuleScriptsImportMetaUrlEnabled() { return is_module_scripts_import_meta_url_enabled_; }

  static void SetMojoBlobURLsEnabled(bool enabled) { is_mojo_blob_ur_ls_enabled_ = enabled; }
  static bool MojoBlobURLsEnabled() { return is_mojo_blob_ur_ls_enabled_; }

  static void SetMojoJSEnabled(bool enabled) { is_mojo_js_enabled_ = enabled; }
  static bool MojoJSEnabled() { return is_mojo_js_enabled_; }

  static void SetMojoJSTestEnabled(bool enabled) { is_mojo_js_test_enabled_ = enabled; }
  static bool MojoJSTestEnabled() { return is_mojo_js_test_enabled_; }

  static void SetMultipleColorStopPositionsEnabled(bool enabled) { is_multiple_color_stop_positions_enabled_ = enabled; }
  static bool MultipleColorStopPositionsEnabled() { return is_multiple_color_stop_positions_enabled_; }

  static void SetNavigatorContentUtilsEnabled(bool enabled) { is_navigator_content_utils_enabled_ = enabled; }
  static bool NavigatorContentUtilsEnabled() { return is_navigator_content_utils_enabled_; }

  static void SetNavigatorDeviceMemoryEnabled(bool enabled) { is_navigator_device_memory_enabled_ = enabled; }
  static bool NavigatorDeviceMemoryEnabled() { return is_navigator_device_memory_enabled_; }

  static void SetNetInfoDownlinkEnabled(bool enabled) { is_net_info_downlink_enabled_ = enabled; }
  static bool NetInfoDownlinkEnabled() { return is_net_info_downlink_enabled_; }

  static void SetNetInfoDownlinkHeaderEnabled(bool enabled) { is_net_info_downlink_header_enabled_ = enabled; }
  static bool NetInfoDownlinkHeaderEnabled() { return is_net_info_downlink_header_enabled_; }

  static void SetNetInfoDownlinkMaxEnabled(bool enabled) { is_net_info_downlink_max_enabled_ = enabled; }
  static bool NetInfoDownlinkMaxEnabled() { return is_net_info_downlink_max_enabled_; }

  static void SetNetInfoEffectiveTypeEnabled(bool enabled) { is_net_info_effective_type_enabled_ = enabled; }
  static bool NetInfoEffectiveTypeEnabled() { return is_net_info_effective_type_enabled_; }

  static void SetNetInfoEffectiveTypeHeaderEnabled(bool enabled) { is_net_info_effective_type_header_enabled_ = enabled; }
  static bool NetInfoEffectiveTypeHeaderEnabled() { return is_net_info_effective_type_header_enabled_; }

  static void SetNetInfoRttEnabled(bool enabled) { is_net_info_rtt_enabled_ = enabled; }
  static bool NetInfoRttEnabled() { return is_net_info_rtt_enabled_; }

  static void SetNetInfoRttHeaderEnabled(bool enabled) { is_net_info_rtt_header_enabled_ = enabled; }
  static bool NetInfoRttHeaderEnabled() { return is_net_info_rtt_header_enabled_; }

  static void SetNetInfoSaveDataEnabled(bool enabled) { is_net_info_save_data_enabled_ = enabled; }
  static bool NetInfoSaveDataEnabled() { return is_net_info_save_data_enabled_; }

  static void SetNetworkServiceEnabled(bool enabled) { is_network_service_enabled_ = enabled; }
  static bool NetworkServiceEnabled() { return is_network_service_enabled_; }

  static void SetNewRemotePlaybackPipelineEnabled(bool enabled) { is_new_remote_playback_pipeline_enabled_ = enabled; }
  static bool NewRemotePlaybackPipelineEnabled() { return is_new_remote_playback_pipeline_enabled_; }

  static void SetNotificationConstructorEnabled(bool enabled) { is_notification_constructor_enabled_ = enabled; }
  static bool NotificationConstructorEnabled() { return is_notification_constructor_enabled_; }

  static void SetNotificationContentImageEnabled(bool enabled) { is_notification_content_image_enabled_ = enabled; }
  static bool NotificationContentImageEnabled() { return is_notification_content_image_enabled_; }

  static void SetNotificationInlineRepliesEnabled(bool enabled) { is_notification_inline_replies_enabled_ = enabled; }
  static bool NotificationInlineRepliesEnabled() { return is_notification_inline_replies_enabled_; }

  static void SetNotificationsEnabled(bool enabled) { is_notifications_enabled_ = enabled; }
  static bool NotificationsEnabled() { return is_notifications_enabled_; }

  static void SetNullableDocumentDomainEnabled(bool enabled) { is_nullable_document_domain_enabled_ = enabled; }
  static bool NullableDocumentDomainEnabled() { return is_nullable_document_domain_enabled_; }

  static void SetOffMainThreadWebSocketEnabled(bool enabled) { is_off_main_thread_websocket_enabled_ = enabled; }
  static bool OffMainThreadWebSocketEnabled() { return is_off_main_thread_websocket_enabled_; }

  static void SetOffscreenCanvasEnabled(bool enabled) { is_offscreen_canvas_enabled_ = enabled; }
  static bool OffscreenCanvasEnabled() { return is_offscreen_canvas_enabled_; }

  static void SetOffscreenCanvasTextEnabled(bool enabled) { is_offscreen_canvas_text_enabled_ = enabled; }
  static bool OffscreenCanvasTextEnabled() { return is_offscreen_canvas_text_enabled_; }

  static void SetOnDeviceChangeEnabled(bool enabled) { is_on_device_change_enabled_ = enabled; }
  static bool OnDeviceChangeEnabled() { return is_on_device_change_enabled_; }

  static void SetOrientationEventEnabled(bool enabled) { is_orientation_event_enabled_ = enabled; }
  static bool OrientationEventEnabled() { return is_orientation_event_enabled_; }

  static void SetOriginManifestEnabled(bool enabled) { is_origin_manifest_enabled_ = enabled; }
  static bool OriginManifestEnabled() { return is_origin_manifest_enabled_; }

  static void SetOriginTrialsEnabled(bool enabled) { is_origin_trials_enabled_ = enabled; }
  static bool OriginTrialsEnabled() { return is_origin_trials_enabled_; }

  static void SetOutOfBlinkCORSEnabled(bool enabled) { is_out_of_blink_cors_enabled_ = enabled; }
  static bool OutOfBlinkCORSEnabled() { return is_out_of_blink_cors_enabled_; }

  static void SetOverflowIconsForMediaControlsEnabled(bool enabled) { is_overflow_icons_for_media_controls_enabled_ = enabled; }
  static bool OverflowIconsForMediaControlsEnabled() { return is_overflow_icons_for_media_controls_enabled_; }

  static void SetOverlayScrollbarsEnabled(bool enabled) { is_overlay_scrollbars_enabled_ = enabled; }
  static bool OverlayScrollbarsEnabled() { return is_overlay_scrollbars_enabled_; }

  static void SetPageLifecycleEnabled(bool enabled) { is_page_lifecycle_enabled_ = enabled; }
  static bool PageLifecycleEnabled() { return is_page_lifecycle_enabled_; }

  static void SetPagePopupEnabled(bool enabled) { is_page_popup_enabled_ = enabled; }
  static bool PagePopupEnabled() { return is_page_popup_enabled_; }

  static void SetPaintUnderInvalidationCheckingEnabled(bool enabled) { is_paint_under_invalidation_checking_enabled_ = enabled; }
  static bool PaintUnderInvalidationCheckingEnabled() { return is_paint_under_invalidation_checking_enabled_; }

  static void SetPartialRasterInvalidationEnabled(bool enabled) { is_partial_raster_invalidation_enabled_ = enabled; }
  static bool PartialRasterInvalidationEnabled() { return is_partial_raster_invalidation_enabled_; }

  static void SetPassiveDocumentEventListenersEnabled(bool enabled) { is_passive_document_event_listeners_enabled_ = enabled; }
  static bool PassiveDocumentEventListenersEnabled() { return is_passive_document_event_listeners_enabled_; }

  static void SetPassPaintVisualRectToCompositorEnabled(bool enabled) { is_pass_paint_visual_rect_to_compositor_enabled_ = enabled; }
  static bool PassPaintVisualRectToCompositorEnabled() { return is_pass_paint_visual_rect_to_compositor_enabled_; }

  static void SetPaymentAppEnabled(bool enabled) { is_payment_app_enabled_ = enabled; }
  static bool PaymentAppEnabled() { return is_payment_app_enabled_; }

  static void SetPaymentDetailsModifierDataEnabled(bool enabled) { is_payment_details_modifier_data_enabled_ = enabled; }
  static bool PaymentDetailsModifierDataEnabled() { return is_payment_details_modifier_data_enabled_; }

  static void SetPaymentRequestEnabled(bool enabled) { is_payment_request_enabled_ = enabled; }
  static bool PaymentRequestEnabled() { return is_payment_request_enabled_; }

  static void SetPaymentRequestBasicCardEnabled(bool enabled) { is_payment_request_basic_card_enabled_ = enabled; }
  static bool PaymentRequestBasicCardEnabled() { return is_payment_request_basic_card_enabled_; }

  static void SetPerformanceNavigationTiming2Enabled(bool enabled) { is_performance_navigation_timing_2_enabled_ = enabled; }
  static bool PerformanceNavigationTiming2Enabled() { return is_performance_navigation_timing_2_enabled_; }

  static void SetPerformancePaintTimingEnabled(bool enabled) { is_performance_paint_timing_enabled_ = enabled; }
  static bool PerformancePaintTimingEnabled() { return is_performance_paint_timing_enabled_; }

  static void SetPermissionDelegationEnabled(bool enabled) { is_permission_delegation_enabled_ = enabled; }
  static bool PermissionDelegationEnabled() { return is_permission_delegation_enabled_; }

  static void SetPermissionsEnabled(bool enabled) { is_permissions_enabled_ = enabled; }
  static bool PermissionsEnabled() { return is_permissions_enabled_; }

  static void SetPermissionsRequestRevokeEnabled(bool enabled) { is_permissions_request_revoke_enabled_ = enabled; }
  static bool PermissionsRequestRevokeEnabled() { return is_permissions_request_revoke_enabled_; }

  static void SetPictureInPictureEnabled(bool enabled) { is_picture_in_picture_enabled_ = enabled; }
  static bool PictureInPictureEnabled() { return is_picture_in_picture_enabled_; }

  static void SetPreciseMemoryInfoEnabled(bool enabled) { is_precise_memory_info_enabled_ = enabled; }
  static bool PreciseMemoryInfoEnabled() { return is_precise_memory_info_enabled_; }

  static void SetPreferredImageRasterBoundsEnabled(bool enabled) { is_preferred_image_raster_bounds_enabled_ = enabled; }
  static bool PreferredImageRasterBoundsEnabled() { return is_preferred_image_raster_bounds_enabled_; }

  static void SetPrefixedVideoFullscreenEnabled(bool enabled) { is_prefixed_video_fullscreen_enabled_ = enabled; }
  static bool PrefixedVideoFullscreenEnabled() { return is_prefixed_video_fullscreen_enabled_; }

  static void SetPreloadDefaultIsMetadataEnabled(bool enabled) { is_preload_default_is_metadata_enabled_ = enabled; }
  static bool PreloadDefaultIsMetadataEnabled() { return is_preload_default_is_metadata_enabled_; }

  static void SetPreloadImageSrcSetEnabled(bool enabled) { is_preload_image_src_set_enabled_ = enabled; }
  static bool PreloadImageSrcSetEnabled() { return is_preload_image_src_set_enabled_; }

  static void SetPresentationEnabled(bool enabled) { is_presentation_enabled_ = enabled; }
  static bool PresentationEnabled() { return is_presentation_enabled_; }

  static void SetPrintBrowserEnabled(bool enabled) { is_print_browser_enabled_ = enabled; }
  static bool PrintBrowserEnabled() { return is_print_browser_enabled_; }

  static void SetPriorityHintsEnabled(bool enabled) { is_priority_hints_enabled_ = enabled; }
  static bool PriorityHintsEnabled() { return is_priority_hints_enabled_; }

  static void SetPushMessagingEnabled(bool enabled) { is_push_messaging_enabled_ = enabled; }
  static bool PushMessagingEnabled() { return is_push_messaging_enabled_; }

  static void SetPWAFullCodeCacheEnabled(bool enabled) { is_pwa_full_code_cache_enabled_ = enabled; }
  static bool PWAFullCodeCacheEnabled() { return is_pwa_full_code_cache_enabled_; }

  static void SetRasterInducingScrollEnabled(bool enabled) { is_raster_inducing_scroll_enabled_ = enabled; }
  static bool RasterInducingScrollEnabled() { return is_raster_inducing_scroll_enabled_; }

  static void SetReducedReferrerGranularityEnabled(bool enabled) { is_reduced_referrer_granularity_enabled_ = enabled; }
  static bool ReducedReferrerGranularityEnabled() { return is_reduced_referrer_granularity_enabled_; }

  static void SetRemotePlaybackEnabled(bool enabled) { is_remote_playback_enabled_ = enabled; }
  static bool RemotePlaybackEnabled() { return is_remote_playback_enabled_; }

  static void SetRemotePlaybackBackendEnabled(bool enabled) { is_remote_playback_backend_enabled_ = enabled; }
  static bool RemotePlaybackBackendEnabled() { return is_remote_playback_backend_enabled_; }

  static void SetRenderingPipelineThrottlingEnabled(bool enabled) { is_rendering_pipeline_throttling_enabled_ = enabled; }
  static bool RenderingPipelineThrottlingEnabled() { return is_rendering_pipeline_throttling_enabled_; }

  static void SetRenderingPipelineThrottlingLoadingIframesEnabled(bool enabled) { is_rendering_pipeline_throttling_loading_iframes_enabled_ = enabled; }
  static bool RenderingPipelineThrottlingLoadingIframesEnabled() { return is_rendering_pipeline_throttling_loading_iframes_enabled_; }

  static void SetRenderUnicodeControlCharactersEnabled(bool enabled) { is_render_unicode_control_characters_enabled_ = enabled; }
  static bool RenderUnicodeControlCharactersEnabled() { return is_render_unicode_control_characters_enabled_; }

  static void SetReportingObserverEnabled(bool enabled) { is_reporting_observer_enabled_ = enabled; }
  static bool ReportingObserverEnabled() { return is_reporting_observer_enabled_; }

  static void SetRequireCSSExtensionForFileEnabled(bool enabled) { is_require_css_extension_for_file_enabled_ = enabled; }
  static bool RequireCSSExtensionForFileEnabled() { return is_require_css_extension_for_file_enabled_; }

  static void SetResizeObserverEnabled(bool enabled) { is_resize_observer_enabled_ = enabled; }
  static bool ResizeObserverEnabled() { return is_resize_observer_enabled_; }

  static void SetResourceLoadSchedulerEnabled(bool enabled) { is_resource_load_scheduler_enabled_ = enabled; }
  static bool ResourceLoadSchedulerEnabled() { return is_resource_load_scheduler_enabled_; }

  static void SetRestrictAppCacheToSecureContextsEnabled(bool enabled) { is_restrict_app_cache_to_secure_contexts_enabled_ = enabled; }
  static bool RestrictAppCacheToSecureContextsEnabled() { return is_restrict_app_cache_to_secure_contexts_enabled_; }

  static void SetRestrictCanRequestURLCharacterSetEnabled(bool enabled) { is_restrict_can_request_url_character_set_enabled_ = enabled; }
  static bool RestrictCanRequestURLCharacterSetEnabled() { return is_restrict_can_request_url_character_set_enabled_; }

  static void SetRootLayerScrollingEnabled(bool enabled) { is_root_layer_scrolling_enabled_ = enabled; }
  static bool RootLayerScrollingEnabled() { return is_root_layer_scrolling_enabled_; }

  static void SetRTCRtpSenderParametersEnabled(bool enabled) { is_rtc_rtp_sender_parameters_enabled_ = enabled; }
  static bool RTCRtpSenderParametersEnabled() { return is_rtc_rtp_sender_parameters_enabled_; }

  static void SetRTCUnifiedPlanEnabled(bool enabled) { is_rtc_unified_plan_enabled_ = enabled; }
  static bool RTCUnifiedPlanEnabled() { return is_rtc_unified_plan_enabled_; }

  static void SetRTCUnifiedPlanByDefaultEnabled(bool enabled) { is_rtc_unified_plan_by_default_enabled_ = enabled; }
  static bool RTCUnifiedPlanByDefaultEnabled() { return is_rtc_unified_plan_by_default_enabled_; }

  static void SetScriptedSpeechEnabled(bool enabled) { is_scripted_speech_enabled_ = enabled; }
  static bool ScriptedSpeechEnabled() { return is_scripted_speech_enabled_; }

  static void SetScrollAnchorSerializationEnabled(bool enabled) { is_scroll_anchor_serialization_enabled_ = enabled; }
  static bool ScrollAnchorSerializationEnabled() { return is_scroll_anchor_serialization_enabled_; }

  static void SetScrollCustomizationEnabled(bool enabled) { is_scroll_customization_enabled_ = enabled; }
  static bool ScrollCustomizationEnabled() { return is_scroll_customization_enabled_; }

  static void SetScrollTopLeftInteropEnabled(bool enabled) { is_scroll_top_left_interop_enabled_ = enabled; }
  static bool ScrollTopLeftInteropEnabled() { return is_scroll_top_left_interop_enabled_; }

  static void SetSecMetadataEnabled(bool enabled) { is_sec_metadata_enabled_ = enabled; }
  static bool SecMetadataEnabled() { return is_sec_metadata_enabled_; }

  static void SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled(bool enabled) { is_send_beacon_throw_for_blob_with_non_simple_type_enabled_ = enabled; }
  static bool SendBeaconThrowForBlobWithNonSimpleTypeEnabled() { return is_send_beacon_throw_for_blob_with_non_simple_type_enabled_; }

  static void SetSendMouseEventsDisabledFormControlsEnabled(bool enabled) { is_send_mouse_events_disabled_form_controls_enabled_ = enabled; }
  static bool SendMouseEventsDisabledFormControlsEnabled() { return is_send_mouse_events_disabled_form_controls_enabled_; }

  static void SetSensorExtraClassesEnabled(bool enabled) { is_sensor_extra_classes_enabled_ = enabled; }
  static bool SensorExtraClassesEnabled() { return is_sensor_extra_classes_enabled_ && is_sensor_enabled_; }

  static void SetServerTimingEnabled(bool enabled) { is_server_timing_enabled_ = enabled; }
  static bool ServerTimingEnabled() { return is_server_timing_enabled_; }

  static void SetServiceWorkerScriptFullCodeCacheEnabled(bool enabled) { is_service_worker_script_full_code_cache_enabled_ = enabled; }
  static bool ServiceWorkerScriptFullCodeCacheEnabled() { return is_service_worker_script_full_code_cache_enabled_; }

  static void SetServiceWorkerUpdateViaCacheEnabled(bool enabled) { is_service_worker_update_via_cache_enabled_ = enabled; }
  static bool ServiceWorkerUpdateViaCacheEnabled() { return is_service_worker_update_via_cache_enabled_; }

  static void SetSetRootScrollerEnabled(bool enabled) { is_set_root_scroller_enabled_ = enabled; }
  static bool SetRootScrollerEnabled() { return is_set_root_scroller_enabled_; }

  static void SetShadowDOMV0Enabled(bool enabled) { is_shadow_dom_v0_enabled_ = enabled; }
  static bool ShadowDOMV0Enabled() { return is_shadow_dom_v0_enabled_; }

  static void SetShadowPiercingDescendantCombinatorEnabled(bool enabled) { is_shadow_piercing_descendant_combinator_enabled_ = enabled; }
  static bool ShadowPiercingDescendantCombinatorEnabled() { return is_shadow_piercing_descendant_combinator_enabled_; }

  static void SetShapeDetectionEnabled(bool enabled) { is_shape_detection_enabled_ = enabled; }
  static bool ShapeDetectionEnabled() { return is_shape_detection_enabled_; }

  static void SetSharedArrayBufferEnabled(bool enabled) { is_shared_array_buffer_enabled_ = enabled; }
  static bool SharedArrayBufferEnabled() { return is_shared_array_buffer_enabled_; }

  static void SetSharedWorkerEnabled(bool enabled) { is_shared_worker_enabled_ = enabled; }
  static bool SharedWorkerEnabled() { return is_shared_worker_enabled_; }

  static void SetSlimmingPaintV175Enabled(bool enabled) { is_slimming_paint_v_175_enabled_ = enabled; }
  static bool SlimmingPaintV175Enabled() { return is_slimming_paint_v_175_enabled_ || is_blink_gen_property_trees_enabled_ || is_slimming_paint_v_2_enabled_ || is_layout_ng_enabled_; }

  static void SetSlimmingPaintV2Enabled(bool enabled) { is_slimming_paint_v_2_enabled_ = enabled; }
  static bool SlimmingPaintV2Enabled() { return is_slimming_paint_v_2_enabled_; }

  static void SetSlotInFlatTreeEnabled(bool enabled) { is_slot_in_flat_tree_enabled_ = enabled; }
  static bool SlotInFlatTreeEnabled() { return is_slot_in_flat_tree_enabled_; }

  static void SetSMILEnabled(bool enabled) { is_smil_enabled_ = enabled; }
  static bool SMILEnabled() { return is_smil_enabled_; }

  static void SetSmoothScrollJSInterventionEnabled(bool enabled) { is_smooth_scroll_js_intervention_enabled_ = enabled; }
  static bool SmoothScrollJSInterventionEnabled() { return is_smooth_scroll_js_intervention_enabled_; }

  static void SetStableBlinkFeaturesEnabled(bool enabled) { is_stable_blink_features_enabled_ = enabled; }
  static bool StableBlinkFeaturesEnabled() { return is_stable_blink_features_enabled_; }

  static void SetStackedCSSPropertyAnimationsEnabled(bool enabled) { is_stacked_css_property_animations_enabled_ = enabled; }
  static bool StackedCSSPropertyAnimationsEnabled() { return is_stacked_css_property_animations_enabled_; }

  static void SetStopInBackgroundEnabled(bool enabled) { is_stop_in_background_enabled_ = enabled; }
  static bool StopInBackgroundEnabled() { return is_stop_in_background_enabled_; }

  static void SetStopLoadingInBackgroundEnabled(bool enabled) { is_stop_loading_in_background_enabled_ = enabled; }
  static bool StopLoadingInBackgroundEnabled() { return is_stop_loading_in_background_enabled_; }

  static void SetStopNonTimersInBackgroundEnabled(bool enabled) { is_stop_non_timers_in_background_enabled_ = enabled; }
  static bool StopNonTimersInBackgroundEnabled() { return is_stop_non_timers_in_background_enabled_; }

  static void SetTimerThrottlingForBackgroundTabsEnabled(bool enabled) { is_timer_throttling_for_background_tabs_enabled_ = enabled; }
  static bool TimerThrottlingForBackgroundTabsEnabled() { return is_timer_throttling_for_background_tabs_enabled_; }

  static void SetTimerThrottlingForHiddenFramesEnabled(bool enabled) { is_timer_throttling_for_hidden_frames_enabled_ = enabled; }
  static bool TimerThrottlingForHiddenFramesEnabled() { return is_timer_throttling_for_hidden_frames_enabled_; }

  static void SetTouchpadAndWheelScrollLatchingEnabled(bool enabled) { is_touchpad_and_wheel_scroll_latching_enabled_ = enabled; }
  static bool TouchpadAndWheelScrollLatchingEnabled() { return is_touchpad_and_wheel_scroll_latching_enabled_; }

  static void SetTrackLayoutPassesPerBlockEnabled(bool enabled) { is_track_layout_passes_per_block_enabled_ = enabled; }
  static bool TrackLayoutPassesPerBlockEnabled() { return is_track_layout_passes_per_block_enabled_; }

  static void SetTrustedDOMTypesEnabled(bool enabled) { is_trusted_dom_types_enabled_ = enabled; }
  static bool TrustedDOMTypesEnabled() { return is_trusted_dom_types_enabled_; }

  static void SetTrustedEventsDefaultActionEnabled(bool enabled) { is_trusted_events_default_action_enabled_ = enabled; }
  static bool TrustedEventsDefaultActionEnabled() { return is_trusted_events_default_action_enabled_; }

  static void SetUnclosedFormControlIsInvalidEnabled(bool enabled) { is_unclosed_form_control_is_invalid_enabled_ = enabled; }
  static bool UnclosedFormControlIsInvalidEnabled() { return is_unclosed_form_control_is_invalid_enabled_; }

  static void SetUnifiedTouchAdjustmentEnabled(bool enabled) { is_unified_touch_adjustment_enabled_ = enabled; }
  static bool UnifiedTouchAdjustmentEnabled() { return is_unified_touch_adjustment_enabled_; }

  static void SetUserActivationV2Enabled(bool enabled) { is_user_activation_v_2_enabled_ = enabled; }
  static bool UserActivationV2Enabled() { return is_user_activation_v_2_enabled_; }

  static void SetV8ContextSnapshotEnabled(bool enabled) { is_v8_context_snapshot_enabled_ = enabled; }
  static bool V8ContextSnapshotEnabled() { return is_v8_context_snapshot_enabled_; }

  static void SetV8IdleTasksEnabled(bool enabled) { is_v8_idle_tasks_enabled_ = enabled; }
  static bool V8IdleTasksEnabled() { return is_v8_idle_tasks_enabled_; }

  static void SetVideoFullscreenDetectionEnabled(bool enabled) { is_video_fullscreen_detection_enabled_ = enabled; }
  static bool VideoFullscreenDetectionEnabled() { return is_video_fullscreen_detection_enabled_; }

  static void SetVideoFullscreenOrientationLockEnabled(bool enabled) { is_video_fullscreen_orientation_lock_enabled_ = enabled; }
  static bool VideoFullscreenOrientationLockEnabled() { return is_video_fullscreen_orientation_lock_enabled_; }

  static void SetVideoRotateToFullscreenEnabled(bool enabled) { is_video_rotate_to_fullscreen_enabled_ = enabled; }
  static bool VideoRotateToFullscreenEnabled() { return is_video_rotate_to_fullscreen_enabled_; }

  static void SetVisibilityCollapseColumnEnabled(bool enabled) { is_visibility_collapse_column_enabled_ = enabled; }
  static bool VisibilityCollapseColumnEnabled() { return is_visibility_collapse_column_enabled_; }

  static void SetVisibilityCollapseRowEnabled(bool enabled) { is_visibility_collapse_row_enabled_ = enabled; }
  static bool VisibilityCollapseRowEnabled() { return is_visibility_collapse_row_enabled_; }

  static void SetVisualViewportAPIEnabled(bool enabled) { is_visual_viewport_api_enabled_ = enabled; }
  static bool VisualViewportAPIEnabled() { return is_visual_viewport_api_enabled_; }

  static void SetWakeLockEnabled(bool enabled) { is_wake_lock_enabled_ = enabled; }
  static bool WakeLockEnabled() { return is_wake_lock_enabled_; }

  static void SetWebAnimationsAPIEnabled(bool enabled) { is_web_animations_api_enabled_ = enabled; }
  static bool WebAnimationsAPIEnabled() { return is_web_animations_api_enabled_; }

  static void SetWebAnimationsSVGEnabled(bool enabled) { is_web_animations_svg_enabled_ = enabled; }
  static bool WebAnimationsSVGEnabled() { return is_web_animations_svg_enabled_; }

  static void SetWebAssemblyStreamingEnabled(bool enabled) { is_web_assembly_streaming_enabled_ = enabled; }
  static bool WebAssemblyStreamingEnabled() { return is_web_assembly_streaming_enabled_; }

  static void SetWebAuthEnabled(bool enabled) { is_web_auth_enabled_ = enabled; }
  static bool WebAuthEnabled() { return is_web_auth_enabled_; }

  static void SetWebBluetoothEnabled(bool enabled) { is_web_bluetooth_enabled_ = enabled; }
  static bool WebBluetoothEnabled() { return is_web_bluetooth_enabled_; }

  static void SetWebFontsCacheAwareTimeoutAdaptationEnabled(bool enabled) { is_web_fonts_cache_aware_timeout_adaptation_enabled_ = enabled; }
  static bool WebFontsCacheAwareTimeoutAdaptationEnabled() { return is_web_fonts_cache_aware_timeout_adaptation_enabled_; }

  static void SetWebGLDraftExtensionsEnabled(bool enabled) { is_webgl_draft_extensions_enabled_ = enabled; }
  static bool WebGLDraftExtensionsEnabled() { return is_webgl_draft_extensions_enabled_; }

  static void SetWebGLImageChromiumEnabled(bool enabled) { is_webgl_image_chromium_enabled_ = enabled; }
  static bool WebGLImageChromiumEnabled() { return is_webgl_image_chromium_enabled_; }

  static void SetWebNFCEnabled(bool enabled) { is_web_nfc_enabled_ = enabled; }
  static bool WebNFCEnabled() { return is_web_nfc_enabled_; }

  static void SetWebShareEnabled(bool enabled) { is_web_share_enabled_ = enabled; }
  static bool WebShareEnabled() { return is_web_share_enabled_; }

  static void SetWebUSBEnabled(bool enabled) { is_web_usb_enabled_ = enabled; }
  static bool WebUSBEnabled() { return is_web_usb_enabled_; }

  static void SetWebUSBOnDedicatedAndSharedWorkersEnabled(bool enabled) { is_web_usb_on_dedicated_and_shared_workers_enabled_ = enabled; }
  static bool WebUSBOnDedicatedAndSharedWorkersEnabled() { return is_web_usb_on_dedicated_and_shared_workers_enabled_ && is_web_usb_enabled_; }

  static void SetWebVTTRegionsEnabled(bool enabled) { is_web_vtt_regions_enabled_ = enabled; }
  static bool WebVTTRegionsEnabled() { return is_web_vtt_regions_enabled_; }

  static void SetWebXRHitTestEnabled(bool enabled) { is_web_xr_hit_test_enabled_ = enabled; }
  static bool WebXRHitTestEnabled() { return is_web_xr_hit_test_enabled_; }

  static void SetWorkerNosniffBlockEnabled(bool enabled) { is_worker_nosniff_block_enabled_ = enabled; }
  static bool WorkerNosniffBlockEnabled() { return is_worker_nosniff_block_enabled_; }

  static void SetWorkerNosniffWarnEnabled(bool enabled) { is_worker_nosniff_warn_enabled_ = enabled; }
  static bool WorkerNosniffWarnEnabled() { return is_worker_nosniff_warn_enabled_ || is_worker_nosniff_block_enabled_; }

  static void SetWorkletEnabled(bool enabled) { is_worklet_enabled_ = enabled; }
  static bool WorkletEnabled() { return is_worklet_enabled_; }

  static void SetWorkStealingInScriptRunnerEnabled(bool enabled) { is_work_stealing_in_script_runner_enabled_ = enabled; }
  static bool WorkStealingInScriptRunnerEnabled() { return is_work_stealing_in_script_runner_enabled_; }

  static void SetXSLTEnabled(bool enabled) { is_xslt_enabled_ = enabled; }
  static bool XSLTEnabled() { return is_xslt_enabled_; }


  // Origin-trial-enabled features:
  //
  // These features are currently part of an origin trial (see
  // https://www.chromium.org/blink/origin-trials). These methods can be used
  // to test whether the feature is unconditionally enabled (for example, by
  // starting the browser with the appropriate command-line flag). However,
  // that is almost always the incorrect check. Most renderer code should
  // be calling OriginTrials::<feature>Enabled() instead, to test if the
  // feature is enabled in a given context.

  static void SetAnimationWorkletEnabled(bool enabled) { is_animation_worklet_enabled_ = enabled; }
  static bool AnimationWorkletEnabledByRuntimeFlag() { return is_animation_worklet_enabled_; }

  static void SetBudgetQueryEnabled(bool enabled) { is_budget_query_enabled_ = enabled; }
  static bool BudgetQueryEnabledByRuntimeFlag() { return is_budget_query_enabled_; }

  static void SetDisableHardwareNoiseSuppressionEnabled(bool enabled) { is_disable_hardware_noise_suppression_enabled_ = enabled; }
  static bool DisableHardwareNoiseSuppressionEnabledByRuntimeFlag() { return is_disable_hardware_noise_suppression_enabled_; }

  static void SetExperimentalHardwareEchoCancellationEnabled(bool enabled) { is_experimental_hardware_echo_cancellation_enabled_ = enabled; }
  static bool ExperimentalHardwareEchoCancellationEnabledByRuntimeFlag() { return is_experimental_hardware_echo_cancellation_enabled_; }

  static void SetGamepadExtensionsEnabled(bool enabled) { is_gamepad_extensions_enabled_ = enabled; }
  static bool GamepadExtensionsEnabledByRuntimeFlag() { return is_gamepad_extensions_enabled_; }

  static void SetInstalledAppEnabled(bool enabled) { is_installed_app_enabled_ = enabled; }
  static bool InstalledAppEnabledByRuntimeFlag() { return is_installed_app_enabled_; }

  static void SetLowLatencyCanvasEnabled(bool enabled) { is_low_latency_canvas_enabled_ = enabled; }
  static bool LowLatencyCanvasEnabledByRuntimeFlag() { return is_low_latency_canvas_enabled_; }

  static void SetMediaCapabilitiesEnabled(bool enabled) { is_media_capabilities_enabled_ = enabled; }
  static bool MediaCapabilitiesEnabledByRuntimeFlag() { return is_media_capabilities_enabled_; }

  static void SetOriginTrialsSampleAPIEnabled(bool enabled) { is_origin_trials_sample_api_enabled_ = enabled; }
  static bool OriginTrialsSampleAPIEnabledByRuntimeFlag() { return is_origin_trials_sample_api_enabled_; }

  static void SetOriginTrialsSampleAPIImpliedEnabled(bool enabled) { is_origin_trials_sample_api_implied_enabled_ = enabled; }
  static bool OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag() { return is_origin_trials_sample_api_implied_enabled_ || is_origin_trials_sample_api_enabled_; }

  static void SetPictureInPictureAPIEnabled(bool enabled) { is_picture_in_picture_api_enabled_ = enabled; }
  static bool PictureInPictureAPIEnabledByRuntimeFlag() { return is_picture_in_picture_api_enabled_; }

  static void SetRtcPeerConnectionIdEnabled(bool enabled) { is_rtc_peer_connection_id_enabled_ = enabled; }
  static bool RtcPeerConnectionIdEnabledByRuntimeFlag() { return is_rtc_peer_connection_id_enabled_; }

  static void SetSensorEnabled(bool enabled) { is_sensor_enabled_ = enabled; }
  static bool SensorEnabledByRuntimeFlag() { return is_sensor_enabled_; }

  static void SetSignatureBasedIntegrityEnabled(bool enabled) { is_signature_based_integrity_enabled_ = enabled; }
  static bool SignatureBasedIntegrityEnabledByRuntimeFlag() { return is_signature_based_integrity_enabled_; }

  static void SetTouchEventFeatureDetectionEnabled(bool enabled) { is_touch_event_feature_detection_enabled_ = enabled; }
  static bool TouchEventFeatureDetectionEnabledByRuntimeFlag() { return is_touch_event_feature_detection_enabled_; }

  static void SetWebLocksAPIEnabled(bool enabled) { is_web_locks_api_enabled_ = enabled; }
  static bool WebLocksAPIEnabledByRuntimeFlag() { return is_web_locks_api_enabled_; }

  static void SetWebRtcVaapiHWVP8EncodingEnabled(bool enabled) { is_web_rtc_vaapi_hwvp_8_encoding_enabled_ = enabled; }
  static bool WebRtcVaapiHWVP8EncodingEnabledByRuntimeFlag() { return is_web_rtc_vaapi_hwvp_8_encoding_enabled_; }

  static void SetWebVREnabled(bool enabled) { is_web_vr_enabled_ = enabled; }
  static bool WebVREnabledByRuntimeFlag() { return is_web_vr_enabled_; }

  static void SetWebXREnabled(bool enabled) { is_web_xr_enabled_ = enabled; }
  static bool WebXREnabledByRuntimeFlag() { return is_web_xr_enabled_; }

  static void SetWebXRGamepadSupportEnabled(bool enabled) { is_web_xr_gamepad_support_enabled_ = enabled; }
  static bool WebXRGamepadSupportEnabledByRuntimeFlag() { return is_web_xr_gamepad_support_enabled_ || is_gamepad_extensions_enabled_; }


 private:
  static bool is_accelerated_2d_canvas_enabled_;
  static bool is_accessibility_object_model_enabled_;
  static bool is_allow_activation_delegation_attr_enabled_;
  static bool is_allow_content_initiated_data_url_navigations_enabled_;
  static bool is_animation_worklet_enabled_;
  static bool is_async_clipboard_enabled_;
  static bool is_async_cookies_enabled_;
  static bool is_audio_output_devices_enabled_;
  static bool is_audio_video_tracks_enabled_;
  static bool is_audio_worklet_enabled_;
  static bool is_automation_controlled_enabled_;
  static bool is_autoplay_ignores_web_audio_enabled_;
  static bool is_autoplay_muted_videos_enabled_;
  static bool is_background_fetch_enabled_;
  static bool is_background_video_track_optimization_enabled_;
  static bool is_blink_gen_property_trees_enabled_;
  static bool is_blink_runtime_call_stats_enabled_;
  static bool is_bloated_renderer_detection_enabled_;
  static bool is_block_credentialed_subresources_enabled_;
  static bool is_blocking_downloads_in_sandbox_enabled_;
  static bool is_block_meta_set_cookie_enabled_;
  static bool is_budget_enabled_;
  static bool is_budget_query_enabled_;
  static bool is_cache_inline_script_code_enabled_;
  static bool is_cache_style_sheet_with_media_queries_enabled_;
  static bool is_canvas_2d_context_lost_restored_enabled_;
  static bool is_canvas_2d_fixed_rendering_mode_enabled_;
  static bool is_canvas_2d_image_chromium_enabled_;
  static bool is_canvas_2d_scroll_path_into_view_enabled_;
  static bool is_canvas_color_management_enabled_;
  static bool is_canvas_hit_region_enabled_;
  static bool is_canvas_image_smoothing_enabled_;
  static bool is_click_retargetting_enabled_;
  static bool is_client_hints_persistent_enabled_;
  static bool is_client_placeholders_for_server_lo_fi_enabled_;
  static bool is_composited_selection_update_enabled_;
  static bool is_composite_opaque_fixed_position_enabled_;
  static bool is_composite_opaque_scrollers_enabled_;
  static bool is_compositor_touch_action_enabled_;
  static bool is_computed_accessibility_info_enabled_;
  static bool is_conic_gradient_enabled_;
  static bool is_constructable_stylesheets_enabled_;
  static bool is_context_menu_enabled_;
  static bool is_cors_rfc_1918_enabled_;
  static bool is_css_3_text_enabled_;
  static bool is_css_additive_animations_enabled_;
  static bool is_css_backdrop_filter_enabled_;
  static bool is_css_display_contents_enabled_;
  static bool is_css_focus_visible_enabled_;
  static bool is_css_font_size_adjust_enabled_;
  static bool is_css_hex_alpha_color_enabled_;
  static bool is_css_in_body_does_not_block_paint_enabled_;
  static bool is_css_independent_transform_properties_enabled_;
  static bool is_css_layout_api_enabled_;
  static bool is_css_mask_source_type_enabled_;
  static bool is_css_matches_enabled_;
  static bool is_css_offset_path_ray_enabled_;
  static bool is_css_offset_path_ray_contain_enabled_;
  static bool is_css_offset_position_anchor_enabled_;
  static bool is_cssom_smooth_scroll_enabled_;
  static bool is_css_overscroll_behavior_enabled_;
  static bool is_css_paint_api_enabled_;
  static bool is_css_paint_api_arguments_enabled_;
  static bool is_css_part_pseudo_element_enabled_;
  static bool is_css_pseudo_is_enabled_;
  static bool is_css_scroll_snap_points_enabled_;
  static bool is_css_snap_size_enabled_;
  static bool is_css_transform_box_enabled_;
  static bool is_css_typed_om_enabled_;
  static bool is_css_variables_2_enabled_;
  static bool is_css_viewport_enabled_;
  static bool is_custom_element_default_style_enabled_;
  static bool is_custom_elements_builtin_enabled_;
  static bool is_custom_elements_v0_enabled_;
  static bool is_custom_user_timing_enabled_;
  static bool is_database_enabled_;
  static bool is_decode_to_yuv_enabled_;
  static bool is_deprecation_reporting_enabled_;
  static bool is_desktop_capture_disable_local_echo_control_enabled_;
  static bool is_device_memory_header_enabled_;
  static bool is_disable_hardware_noise_suppression_enabled_;
  static bool is_disable_paint_chunks_to_cc_layer_enabled_;
  static bool is_disable_raster_invalidation_enabled_;
  static bool is_display_cutout_viewport_fit_enabled_;
  static bool is_display_none_iframe_creates_no_layout_object_enabled_;
  static bool is_document_cookie_enabled_;
  static bool is_document_domain_enabled_;
  static bool is_document_write_enabled_;
  static bool is_embedder_csp_enforcement_enabled_;
  static bool is_encrypted_media_hdcp_policy_check_enabled_;
  static bool is_event_timing_enabled_;
  static bool is_exec_command_in_java_script_enabled_;
  static bool is_expensive_background_timer_throttling_enabled_;
  static bool is_experimental_content_security_policy_features_enabled_;
  static bool is_experimental_hardware_echo_cancellation_enabled_;
  static bool is_experimental_productivity_features_enabled_;
  static bool is_experimental_v8_extras_enabled_;
  static bool is_extended_image_bitmap_options_enabled_;
  static bool is_extended_text_metrics_enabled_;
  static bool is_extra_webgl_video_texture_metadata_enabled_;
  static bool is_fast_mobile_scrolling_enabled_;
  static bool is_feature_policy_autoplay_feature_enabled_;
  static bool is_feature_policy_experimental_features_enabled_;
  static bool is_feature_policy_for_permissions_enabled_;
  static bool is_feature_policy_java_script_interface_enabled_;
  static bool is_feature_policy_vibrate_feature_enabled_;
  static bool is_fetch_request_cache_enabled_;
  static bool is_fetch_request_keepalive_enabled_;
  static bool is_fetch_request_signal_enabled_;
  static bool is_file_system_enabled_;
  static bool is_focus_options_enabled_;
  static bool is_font_cache_scaling_enabled_;
  static bool is_force_overlay_fullscreen_video_enabled_;
  static bool is_force_taller_select_popup_enabled_;
  static bool is_form_data_event_enabled_;
  static bool is_fractional_mouse_event_enabled_;
  static bool is_fractional_mouse_type_pointer_event_enabled_;
  static bool is_fractional_scroll_offsets_enabled_;
  static bool is_framebusting_needs_same_origin_or_user_gesture_enabled_;
  static bool is_frames_timing_function_enabled_;
  static bool is_fullscreen_options_enabled_;
  static bool is_fullscreen_unprefixed_enabled_;
  static bool is_gamepad_extensions_enabled_;
  static bool is_gamepad_vibration_enabled_;
  static bool is_heap_compaction_enabled_;
  static bool is_heap_incremental_marking_enabled_;
  static bool is_heap_incremental_marking_stress_enabled_;
  static bool is_html_imports_enabled_;
  static bool is_html_imports_style_application_enabled_;
  static bool is_idb_observer_enabled_;
  static bool is_idle_time_cold_mode_spell_checking_enabled_;
  static bool is_image_decoding_attribute_enabled_;
  static bool is_image_orientation_enabled_;
  static bool is_implicit_root_scroller_enabled_;
  static bool is_incremental_shadow_dom_enabled_;
  static bool is_inert_attribute_enabled_;
  static bool is_input_multiple_fields_ui_enabled_;
  static bool is_installed_app_enabled_;
  static bool is_intersection_observer_geometry_mapper_enabled_;
  static bool is_intersection_observer_v_2_enabled_;
  static bool is_js_image_decode_enabled_;
  static bool is_keyboard_lock_enabled_;
  static bool is_keyboard_map_enabled_;
  static bool is_lang_attribute_aware_form_control_ui_enabled_;
  static bool is_layered_api_enabled_;
  static bool is_layout_ng_enabled_;
  static bool is_layout_ng_block_fragmentation_enabled_;
  static bool is_layout_ng_flex_box_enabled_;
  static bool is_layout_ng_fragment_caching_enabled_;
  static bool is_lazy_frame_loading_enabled_;
  static bool is_lazy_initialize_media_controls_enabled_;
  static bool is_lazy_parse_css_enabled_;
  static bool is_loading_with_mojo_enabled_;
  static bool is_long_task_observer_enabled_;
  static bool is_long_task_v_2_enabled_;
  static bool is_low_latency_canvas_enabled_;
  static bool is_media_capabilities_enabled_;
  static bool is_media_capabilities_encoding_info_enabled_;
  static bool is_media_capture_enabled_;
  static bool is_media_capture_depth_enabled_;
  static bool is_media_capture_depth_video_kind_enabled_;
  static bool is_media_capture_from_video_enabled_;
  static bool is_media_cast_overlay_button_enabled_;
  static bool is_media_controls_overlay_play_button_enabled_;
  static bool is_media_document_download_button_enabled_;
  static bool is_media_engagement_bypass_autoplay_policies_enabled_;
  static bool is_media_query_shape_enabled_;
  static bool is_media_session_enabled_;
  static bool is_media_source_experimental_enabled_;
  static bool is_media_source_new_abort_and_duration_enabled_;
  static bool is_media_stream_track_content_hint_enabled_;
  static bool is_middle_click_autoscroll_enabled_;
  static bool is_mobile_layout_theme_enabled_;
  static bool is_modern_media_controls_enabled_;
  static bool is_module_dedicated_worker_enabled_;
  static bool is_module_preload_enabled_;
  static bool is_module_scripts_dynamic_import_enabled_;
  static bool is_module_scripts_import_meta_url_enabled_;
  static bool is_mojo_blob_ur_ls_enabled_;
  static bool is_mojo_js_enabled_;
  static bool is_mojo_js_test_enabled_;
  static bool is_multiple_color_stop_positions_enabled_;
  static bool is_navigator_content_utils_enabled_;
  static bool is_navigator_device_memory_enabled_;
  static bool is_net_info_downlink_enabled_;
  static bool is_net_info_downlink_header_enabled_;
  static bool is_net_info_downlink_max_enabled_;
  static bool is_net_info_effective_type_enabled_;
  static bool is_net_info_effective_type_header_enabled_;
  static bool is_net_info_rtt_enabled_;
  static bool is_net_info_rtt_header_enabled_;
  static bool is_net_info_save_data_enabled_;
  static bool is_network_service_enabled_;
  static bool is_new_remote_playback_pipeline_enabled_;
  static bool is_notification_constructor_enabled_;
  static bool is_notification_content_image_enabled_;
  static bool is_notification_inline_replies_enabled_;
  static bool is_notifications_enabled_;
  static bool is_nullable_document_domain_enabled_;
  static bool is_off_main_thread_websocket_enabled_;
  static bool is_offscreen_canvas_enabled_;
  static bool is_offscreen_canvas_text_enabled_;
  static bool is_on_device_change_enabled_;
  static bool is_orientation_event_enabled_;
  static bool is_origin_manifest_enabled_;
  static bool is_origin_trials_enabled_;
  static bool is_origin_trials_sample_api_enabled_;
  static bool is_origin_trials_sample_api_implied_enabled_;
  static bool is_out_of_blink_cors_enabled_;
  static bool is_overflow_icons_for_media_controls_enabled_;
  static bool is_overlay_scrollbars_enabled_;
  static bool is_page_lifecycle_enabled_;
  static bool is_page_popup_enabled_;
  static bool is_paint_under_invalidation_checking_enabled_;
  static bool is_partial_raster_invalidation_enabled_;
  static bool is_passive_document_event_listeners_enabled_;
  static bool is_pass_paint_visual_rect_to_compositor_enabled_;
  static bool is_payment_app_enabled_;
  static bool is_payment_details_modifier_data_enabled_;
  static bool is_payment_request_enabled_;
  static bool is_payment_request_basic_card_enabled_;
  static bool is_performance_navigation_timing_2_enabled_;
  static bool is_performance_paint_timing_enabled_;
  static bool is_permission_delegation_enabled_;
  static bool is_permissions_enabled_;
  static bool is_permissions_request_revoke_enabled_;
  static bool is_picture_in_picture_enabled_;
  static bool is_picture_in_picture_api_enabled_;
  static bool is_precise_memory_info_enabled_;
  static bool is_preferred_image_raster_bounds_enabled_;
  static bool is_prefixed_video_fullscreen_enabled_;
  static bool is_preload_default_is_metadata_enabled_;
  static bool is_preload_image_src_set_enabled_;
  static bool is_presentation_enabled_;
  static bool is_print_browser_enabled_;
  static bool is_priority_hints_enabled_;
  static bool is_push_messaging_enabled_;
  static bool is_pwa_full_code_cache_enabled_;
  static bool is_raster_inducing_scroll_enabled_;
  static bool is_reduced_referrer_granularity_enabled_;
  static bool is_remote_playback_enabled_;
  static bool is_remote_playback_backend_enabled_;
  static bool is_rendering_pipeline_throttling_enabled_;
  static bool is_rendering_pipeline_throttling_loading_iframes_enabled_;
  static bool is_render_unicode_control_characters_enabled_;
  static bool is_reporting_observer_enabled_;
  static bool is_require_css_extension_for_file_enabled_;
  static bool is_resize_observer_enabled_;
  static bool is_resource_load_scheduler_enabled_;
  static bool is_restrict_app_cache_to_secure_contexts_enabled_;
  static bool is_restrict_can_request_url_character_set_enabled_;
  static bool is_root_layer_scrolling_enabled_;
  static bool is_rtc_peer_connection_id_enabled_;
  static bool is_rtc_rtp_sender_parameters_enabled_;
  static bool is_rtc_unified_plan_enabled_;
  static bool is_rtc_unified_plan_by_default_enabled_;
  static bool is_scripted_speech_enabled_;
  static bool is_scroll_anchor_serialization_enabled_;
  static bool is_scroll_customization_enabled_;
  static bool is_scroll_top_left_interop_enabled_;
  static bool is_sec_metadata_enabled_;
  static bool is_send_beacon_throw_for_blob_with_non_simple_type_enabled_;
  static bool is_send_mouse_events_disabled_form_controls_enabled_;
  static bool is_sensor_enabled_;
  static bool is_sensor_extra_classes_enabled_;
  static bool is_server_timing_enabled_;
  static bool is_service_worker_script_full_code_cache_enabled_;
  static bool is_service_worker_update_via_cache_enabled_;
  static bool is_set_root_scroller_enabled_;
  static bool is_shadow_dom_v0_enabled_;
  static bool is_shadow_piercing_descendant_combinator_enabled_;
  static bool is_shape_detection_enabled_;
  static bool is_shared_array_buffer_enabled_;
  static bool is_shared_worker_enabled_;
  static bool is_signature_based_integrity_enabled_;
  static bool is_slimming_paint_v_175_enabled_;
  static bool is_slimming_paint_v_2_enabled_;
  static bool is_slot_in_flat_tree_enabled_;
  static bool is_smil_enabled_;
  static bool is_smooth_scroll_js_intervention_enabled_;
  static bool is_stable_blink_features_enabled_;
  static bool is_stacked_css_property_animations_enabled_;
  static bool is_stop_in_background_enabled_;
  static bool is_stop_loading_in_background_enabled_;
  static bool is_stop_non_timers_in_background_enabled_;
  static bool is_timer_throttling_for_background_tabs_enabled_;
  static bool is_timer_throttling_for_hidden_frames_enabled_;
  static bool is_touch_event_feature_detection_enabled_;
  static bool is_touchpad_and_wheel_scroll_latching_enabled_;
  static bool is_track_layout_passes_per_block_enabled_;
  static bool is_trusted_dom_types_enabled_;
  static bool is_trusted_events_default_action_enabled_;
  static bool is_unclosed_form_control_is_invalid_enabled_;
  static bool is_unified_touch_adjustment_enabled_;
  static bool is_user_activation_v_2_enabled_;
  static bool is_v8_context_snapshot_enabled_;
  static bool is_v8_idle_tasks_enabled_;
  static bool is_video_fullscreen_detection_enabled_;
  static bool is_video_fullscreen_orientation_lock_enabled_;
  static bool is_video_rotate_to_fullscreen_enabled_;
  static bool is_visibility_collapse_column_enabled_;
  static bool is_visibility_collapse_row_enabled_;
  static bool is_visual_viewport_api_enabled_;
  static bool is_wake_lock_enabled_;
  static bool is_web_animations_api_enabled_;
  static bool is_web_animations_svg_enabled_;
  static bool is_web_assembly_streaming_enabled_;
  static bool is_web_auth_enabled_;
  static bool is_web_bluetooth_enabled_;
  static bool is_web_fonts_cache_aware_timeout_adaptation_enabled_;
  static bool is_webgl_draft_extensions_enabled_;
  static bool is_webgl_image_chromium_enabled_;
  static bool is_web_locks_api_enabled_;
  static bool is_web_nfc_enabled_;
  static bool is_web_rtc_vaapi_hwvp_8_encoding_enabled_;
  static bool is_web_share_enabled_;
  static bool is_web_usb_enabled_;
  static bool is_web_usb_on_dedicated_and_shared_workers_enabled_;
  static bool is_web_vr_enabled_;
  static bool is_web_vtt_regions_enabled_;
  static bool is_web_xr_enabled_;
  static bool is_web_xr_gamepad_support_enabled_;
  static bool is_web_xr_hit_test_enabled_;
  static bool is_worker_nosniff_block_enabled_;
  static bool is_worker_nosniff_warn_enabled_;
  static bool is_worklet_enabled_;
  static bool is_work_stealing_in_script_runner_enabled_;
  static bool is_xslt_enabled_;
};

} // namespace blink

#endif // RuntimeEnabledFeatures_h
