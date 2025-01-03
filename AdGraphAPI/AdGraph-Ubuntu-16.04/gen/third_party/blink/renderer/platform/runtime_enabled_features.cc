// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

#include "third_party/blink/renderer/platform/wtf/assertions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

RuntimeEnabledFeatures::Backup::Backup()
  :     accelerated_2d_canvas_(RuntimeEnabledFeatures::Accelerated2dCanvasEnabled())
,
        accessibility_object_model_(RuntimeEnabledFeatures::AccessibilityObjectModelEnabled())
,
        allow_activation_delegation_attr_(RuntimeEnabledFeatures::AllowActivationDelegationAttrEnabled())
,
        allow_content_initiated_data_url_navigations_(RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled())
,
        animation_worklet_(RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag())
,
        async_clipboard_(RuntimeEnabledFeatures::AsyncClipboardEnabled())
,
        async_cookies_(RuntimeEnabledFeatures::AsyncCookiesEnabled())
,
        audio_output_devices_(RuntimeEnabledFeatures::AudioOutputDevicesEnabled())
,
        audio_video_tracks_(RuntimeEnabledFeatures::AudioVideoTracksEnabled())
,
        audio_worklet_(RuntimeEnabledFeatures::AudioWorkletEnabled())
,
        automation_controlled_(RuntimeEnabledFeatures::AutomationControlledEnabled())
,
        autoplay_ignores_web_audio_(RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled())
,
        autoplay_muted_videos_(RuntimeEnabledFeatures::AutoplayMutedVideosEnabled())
,
        background_fetch_(RuntimeEnabledFeatures::BackgroundFetchEnabled())
,
        background_video_track_optimization_(RuntimeEnabledFeatures::BackgroundVideoTrackOptimizationEnabled())
,
        blink_gen_property_trees_(RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled())
,
        blink_runtime_call_stats_(RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled())
,
        bloated_renderer_detection_(RuntimeEnabledFeatures::BloatedRendererDetectionEnabled())
,
        block_credentialed_subresources_(RuntimeEnabledFeatures::BlockCredentialedSubresourcesEnabled())
,
        blocking_downloads_in_sandbox_(RuntimeEnabledFeatures::BlockingDownloadsInSandboxEnabled())
,
        block_meta_set_cookie_(RuntimeEnabledFeatures::BlockMetaSetCookieEnabled())
,
        budget_(RuntimeEnabledFeatures::BudgetEnabled())
,
        budget_query_(RuntimeEnabledFeatures::BudgetQueryEnabledByRuntimeFlag())
,
        cache_inline_script_code_(RuntimeEnabledFeatures::CacheInlineScriptCodeEnabled())
,
        cache_style_sheet_with_media_queries_(RuntimeEnabledFeatures::CacheStyleSheetWithMediaQueriesEnabled())
,
        canvas_2d_context_lost_restored_(RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled())
,
        canvas_2d_fixed_rendering_mode_(RuntimeEnabledFeatures::Canvas2dFixedRenderingModeEnabled())
,
        canvas_2d_image_chromium_(RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled())
,
        canvas_2d_scroll_path_into_view_(RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled())
,
        canvas_color_management_(RuntimeEnabledFeatures::CanvasColorManagementEnabled())
,
        canvas_hit_region_(RuntimeEnabledFeatures::CanvasHitRegionEnabled())
,
        canvas_image_smoothing_(RuntimeEnabledFeatures::CanvasImageSmoothingEnabled())
,
        click_retargetting_(RuntimeEnabledFeatures::ClickRetargettingEnabled())
,
        client_hints_persistent_(RuntimeEnabledFeatures::ClientHintsPersistentEnabled())
,
        client_placeholders_for_server_lo_fi_(RuntimeEnabledFeatures::ClientPlaceholdersForServerLoFiEnabled())
,
        composited_selection_update_(RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled())
,
        composite_opaque_fixed_position_(RuntimeEnabledFeatures::CompositeOpaqueFixedPositionEnabled())
,
        composite_opaque_scrollers_(RuntimeEnabledFeatures::CompositeOpaqueScrollersEnabled())
,
        compositor_touch_action_(RuntimeEnabledFeatures::CompositorTouchActionEnabled())
,
        computed_accessibility_info_(RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled())
,
        conic_gradient_(RuntimeEnabledFeatures::ConicGradientEnabled())
,
        constructable_stylesheets_(RuntimeEnabledFeatures::ConstructableStylesheetsEnabled())
,
        context_menu_(RuntimeEnabledFeatures::ContextMenuEnabled())
,
        cors_rfc_1918_(RuntimeEnabledFeatures::CorsRFC1918Enabled())
,
        css_3_text_(RuntimeEnabledFeatures::CSS3TextEnabled())
,
        css_additive_animations_(RuntimeEnabledFeatures::CSSAdditiveAnimationsEnabled())
,
        css_backdrop_filter_(RuntimeEnabledFeatures::CSSBackdropFilterEnabled())
,
        css_display_contents_(RuntimeEnabledFeatures::CSSDisplayContentsEnabled())
,
        css_focus_visible_(RuntimeEnabledFeatures::CSSFocusVisibleEnabled())
,
        css_font_size_adjust_(RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled())
,
        css_hex_alpha_color_(RuntimeEnabledFeatures::CSSHexAlphaColorEnabled())
,
        css_in_body_does_not_block_paint_(RuntimeEnabledFeatures::CSSInBodyDoesNotBlockPaintEnabled())
,
        css_independent_transform_properties_(RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled())
,
        css_layout_api_(RuntimeEnabledFeatures::CSSLayoutAPIEnabled())
,
        css_mask_source_type_(RuntimeEnabledFeatures::CSSMaskSourceTypeEnabled())
,
        css_matches_(RuntimeEnabledFeatures::CSSMatchesEnabled())
,
        css_offset_path_ray_(RuntimeEnabledFeatures::CSSOffsetPathRayEnabled())
,
        css_offset_path_ray_contain_(RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled())
,
        css_offset_position_anchor_(RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled())
,
        cssom_smooth_scroll_(RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled())
,
        css_overscroll_behavior_(RuntimeEnabledFeatures::CSSOverscrollBehaviorEnabled())
,
        css_paint_api_(RuntimeEnabledFeatures::CSSPaintAPIEnabled())
,
        css_paint_api_arguments_(RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled())
,
        css_part_pseudo_element_(RuntimeEnabledFeatures::CSSPartPseudoElementEnabled())
,
        css_pseudo_is_(RuntimeEnabledFeatures::CSSPseudoISEnabled())
,
        css_scroll_snap_points_(RuntimeEnabledFeatures::CSSScrollSnapPointsEnabled())
,
        css_snap_size_(RuntimeEnabledFeatures::CSSSnapSizeEnabled())
,
        css_transform_box_(RuntimeEnabledFeatures::CSSTransformBoxEnabled())
,
        css_typed_om_(RuntimeEnabledFeatures::CSSTypedOMEnabled())
,
        css_variables_2_(RuntimeEnabledFeatures::CSSVariables2Enabled())
,
        css_viewport_(RuntimeEnabledFeatures::CSSViewportEnabled())
,
        custom_element_default_style_(RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled())
,
        custom_elements_builtin_(RuntimeEnabledFeatures::CustomElementsBuiltinEnabled())
,
        custom_elements_v0_(RuntimeEnabledFeatures::CustomElementsV0Enabled())
,
        custom_user_timing_(RuntimeEnabledFeatures::CustomUserTimingEnabled())
,
        database_(RuntimeEnabledFeatures::DatabaseEnabled())
,
        decode_to_yuv_(RuntimeEnabledFeatures::DecodeToYUVEnabled())
,
        deprecation_reporting_(RuntimeEnabledFeatures::DeprecationReportingEnabled())
,
        desktop_capture_disable_local_echo_control_(RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled())
,
        device_memory_header_(RuntimeEnabledFeatures::DeviceMemoryHeaderEnabled())
,
        disable_hardware_noise_suppression_(RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag())
,
        disable_paint_chunks_to_cc_layer_(RuntimeEnabledFeatures::DisablePaintChunksToCcLayerEnabled())
,
        disable_raster_invalidation_(RuntimeEnabledFeatures::DisableRasterInvalidationEnabled())
,
        display_cutout_viewport_fit_(RuntimeEnabledFeatures::DisplayCutoutViewportFitEnabled())
,
        display_none_iframe_creates_no_layout_object_(RuntimeEnabledFeatures::DisplayNoneIFrameCreatesNoLayoutObjectEnabled())
,
        document_cookie_(RuntimeEnabledFeatures::DocumentCookieEnabled())
,
        document_domain_(RuntimeEnabledFeatures::DocumentDomainEnabled())
,
        document_write_(RuntimeEnabledFeatures::DocumentWriteEnabled())
,
        embedder_csp_enforcement_(RuntimeEnabledFeatures::EmbedderCSPEnforcementEnabled())
,
        encrypted_media_hdcp_policy_check_(RuntimeEnabledFeatures::EncryptedMediaHdcpPolicyCheckEnabled())
,
        event_timing_(RuntimeEnabledFeatures::EventTimingEnabled())
,
        exec_command_in_java_script_(RuntimeEnabledFeatures::ExecCommandInJavaScriptEnabled())
,
        expensive_background_timer_throttling_(RuntimeEnabledFeatures::ExpensiveBackgroundTimerThrottlingEnabled())
,
        experimental_content_security_policy_features_(RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled())
,
        experimental_hardware_echo_cancellation_(RuntimeEnabledFeatures::ExperimentalHardwareEchoCancellationEnabledByRuntimeFlag())
,
        experimental_productivity_features_(RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled())
,
        experimental_v8_extras_(RuntimeEnabledFeatures::ExperimentalV8ExtrasEnabled())
,
        extended_image_bitmap_options_(RuntimeEnabledFeatures::ExtendedImageBitmapOptionsEnabled())
,
        extended_text_metrics_(RuntimeEnabledFeatures::ExtendedTextMetricsEnabled())
,
        extra_webgl_video_texture_metadata_(RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled())
,
        fast_mobile_scrolling_(RuntimeEnabledFeatures::FastMobileScrollingEnabled())
,
        feature_policy_autoplay_feature_(RuntimeEnabledFeatures::FeaturePolicyAutoplayFeatureEnabled())
,
        feature_policy_experimental_features_(RuntimeEnabledFeatures::FeaturePolicyExperimentalFeaturesEnabled())
,
        feature_policy_for_permissions_(RuntimeEnabledFeatures::FeaturePolicyForPermissionsEnabled())
,
        feature_policy_java_script_interface_(RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled())
,
        feature_policy_vibrate_feature_(RuntimeEnabledFeatures::FeaturePolicyVibrateFeatureEnabled())
,
        fetch_request_cache_(RuntimeEnabledFeatures::FetchRequestCacheEnabled())
,
        fetch_request_keepalive_(RuntimeEnabledFeatures::FetchRequestKeepaliveEnabled())
,
        fetch_request_signal_(RuntimeEnabledFeatures::FetchRequestSignalEnabled())
,
        file_system_(RuntimeEnabledFeatures::FileSystemEnabled())
,
        focus_options_(RuntimeEnabledFeatures::FocusOptionsEnabled())
,
        font_cache_scaling_(RuntimeEnabledFeatures::FontCacheScalingEnabled())
,
        force_overlay_fullscreen_video_(RuntimeEnabledFeatures::ForceOverlayFullscreenVideoEnabled())
,
        force_taller_select_popup_(RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled())
,
        form_data_event_(RuntimeEnabledFeatures::FormDataEventEnabled())
,
        fractional_mouse_event_(RuntimeEnabledFeatures::FractionalMouseEventEnabled())
,
        fractional_mouse_type_pointer_event_(RuntimeEnabledFeatures::FractionalMouseTypePointerEventEnabled())
,
        fractional_scroll_offsets_(RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled())
,
        framebusting_needs_same_origin_or_user_gesture_(RuntimeEnabledFeatures::FramebustingNeedsSameOriginOrUserGestureEnabled())
,
        frames_timing_function_(RuntimeEnabledFeatures::FramesTimingFunctionEnabled())
,
        fullscreen_options_(RuntimeEnabledFeatures::FullscreenOptionsEnabled())
,
        fullscreen_unprefixed_(RuntimeEnabledFeatures::FullscreenUnprefixedEnabled())
,
        gamepad_extensions_(RuntimeEnabledFeatures::GamepadExtensionsEnabledByRuntimeFlag())
,
        gamepad_vibration_(RuntimeEnabledFeatures::GamepadVibrationEnabled())
,
        heap_compaction_(RuntimeEnabledFeatures::HeapCompactionEnabled())
,
        heap_incremental_marking_(RuntimeEnabledFeatures::HeapIncrementalMarkingEnabled())
,
        heap_incremental_marking_stress_(RuntimeEnabledFeatures::HeapIncrementalMarkingStressEnabled())
,
        html_imports_(RuntimeEnabledFeatures::HTMLImportsEnabled())
,
        html_imports_style_application_(RuntimeEnabledFeatures::HTMLImportsStyleApplicationEnabled())
,
        idb_observer_(RuntimeEnabledFeatures::IDBObserverEnabled())
,
        idle_time_cold_mode_spell_checking_(RuntimeEnabledFeatures::IdleTimeColdModeSpellCheckingEnabled())
,
        image_decoding_attribute_(RuntimeEnabledFeatures::ImageDecodingAttributeEnabled())
,
        image_orientation_(RuntimeEnabledFeatures::ImageOrientationEnabled())
,
        implicit_root_scroller_(RuntimeEnabledFeatures::ImplicitRootScrollerEnabled())
,
        incremental_shadow_dom_(RuntimeEnabledFeatures::IncrementalShadowDOMEnabled())
,
        inert_attribute_(RuntimeEnabledFeatures::InertAttributeEnabled())
,
        input_multiple_fields_ui_(RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled())
,
        installed_app_(RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag())
,
        intersection_observer_geometry_mapper_(RuntimeEnabledFeatures::IntersectionObserverGeometryMapperEnabled())
,
        intersection_observer_v_2_(RuntimeEnabledFeatures::IntersectionObserverV2Enabled())
,
        js_image_decode_(RuntimeEnabledFeatures::JSImageDecodeEnabled())
,
        keyboard_lock_(RuntimeEnabledFeatures::KeyboardLockEnabled())
,
        keyboard_map_(RuntimeEnabledFeatures::KeyboardMapEnabled())
,
        lang_attribute_aware_form_control_ui_(RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled())
,
        layered_api_(RuntimeEnabledFeatures::LayeredAPIEnabled())
,
        layout_ng_(RuntimeEnabledFeatures::LayoutNGEnabled())
,
        layout_ng_block_fragmentation_(RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled())
,
        layout_ng_flex_box_(RuntimeEnabledFeatures::LayoutNGFlexBoxEnabled())
,
        layout_ng_fragment_caching_(RuntimeEnabledFeatures::LayoutNGFragmentCachingEnabled())
,
        lazy_frame_loading_(RuntimeEnabledFeatures::LazyFrameLoadingEnabled())
,
        lazy_initialize_media_controls_(RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled())
,
        lazy_parse_css_(RuntimeEnabledFeatures::LazyParseCSSEnabled())
,
        loading_with_mojo_(RuntimeEnabledFeatures::LoadingWithMojoEnabled())
,
        long_task_observer_(RuntimeEnabledFeatures::LongTaskObserverEnabled())
,
        long_task_v_2_(RuntimeEnabledFeatures::LongTaskV2Enabled())
,
        low_latency_canvas_(RuntimeEnabledFeatures::LowLatencyCanvasEnabledByRuntimeFlag())
,
        media_capabilities_(RuntimeEnabledFeatures::MediaCapabilitiesEnabledByRuntimeFlag())
,
        media_capabilities_encoding_info_(RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled())
,
        media_capture_(RuntimeEnabledFeatures::MediaCaptureEnabled())
,
        media_capture_depth_(RuntimeEnabledFeatures::MediaCaptureDepthEnabled())
,
        media_capture_depth_video_kind_(RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled())
,
        media_capture_from_video_(RuntimeEnabledFeatures::MediaCaptureFromVideoEnabled())
,
        media_cast_overlay_button_(RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled())
,
        media_controls_overlay_play_button_(RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled())
,
        media_document_download_button_(RuntimeEnabledFeatures::MediaDocumentDownloadButtonEnabled())
,
        media_engagement_bypass_autoplay_policies_(RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled())
,
        media_query_shape_(RuntimeEnabledFeatures::MediaQueryShapeEnabled())
,
        media_session_(RuntimeEnabledFeatures::MediaSessionEnabled())
,
        media_source_experimental_(RuntimeEnabledFeatures::MediaSourceExperimentalEnabled())
,
        media_source_new_abort_and_duration_(RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled())
,
        media_stream_track_content_hint_(RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled())
,
        middle_click_autoscroll_(RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled())
,
        mobile_layout_theme_(RuntimeEnabledFeatures::MobileLayoutThemeEnabled())
,
        modern_media_controls_(RuntimeEnabledFeatures::ModernMediaControlsEnabled())
,
        module_dedicated_worker_(RuntimeEnabledFeatures::ModuleDedicatedWorkerEnabled())
,
        module_preload_(RuntimeEnabledFeatures::ModulePreloadEnabled())
,
        module_scripts_dynamic_import_(RuntimeEnabledFeatures::ModuleScriptsDynamicImportEnabled())
,
        module_scripts_import_meta_url_(RuntimeEnabledFeatures::ModuleScriptsImportMetaUrlEnabled())
,
        mojo_blob_ur_ls_(RuntimeEnabledFeatures::MojoBlobURLsEnabled())
,
        mojo_js_(RuntimeEnabledFeatures::MojoJSEnabled())
,
        mojo_js_test_(RuntimeEnabledFeatures::MojoJSTestEnabled())
,
        multiple_color_stop_positions_(RuntimeEnabledFeatures::MultipleColorStopPositionsEnabled())
,
        navigator_content_utils_(RuntimeEnabledFeatures::NavigatorContentUtilsEnabled())
,
        navigator_device_memory_(RuntimeEnabledFeatures::NavigatorDeviceMemoryEnabled())
,
        net_info_downlink_(RuntimeEnabledFeatures::NetInfoDownlinkEnabled())
,
        net_info_downlink_header_(RuntimeEnabledFeatures::NetInfoDownlinkHeaderEnabled())
,
        net_info_downlink_max_(RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled())
,
        net_info_effective_type_(RuntimeEnabledFeatures::NetInfoEffectiveTypeEnabled())
,
        net_info_effective_type_header_(RuntimeEnabledFeatures::NetInfoEffectiveTypeHeaderEnabled())
,
        net_info_rtt_(RuntimeEnabledFeatures::NetInfoRttEnabled())
,
        net_info_rtt_header_(RuntimeEnabledFeatures::NetInfoRttHeaderEnabled())
,
        net_info_save_data_(RuntimeEnabledFeatures::NetInfoSaveDataEnabled())
,
        network_service_(RuntimeEnabledFeatures::NetworkServiceEnabled())
,
        new_remote_playback_pipeline_(RuntimeEnabledFeatures::NewRemotePlaybackPipelineEnabled())
,
        notification_constructor_(RuntimeEnabledFeatures::NotificationConstructorEnabled())
,
        notification_content_image_(RuntimeEnabledFeatures::NotificationContentImageEnabled())
,
        notification_inline_replies_(RuntimeEnabledFeatures::NotificationInlineRepliesEnabled())
,
        notifications_(RuntimeEnabledFeatures::NotificationsEnabled())
,
        nullable_document_domain_(RuntimeEnabledFeatures::NullableDocumentDomainEnabled())
,
        off_main_thread_websocket_(RuntimeEnabledFeatures::OffMainThreadWebSocketEnabled())
,
        offscreen_canvas_(RuntimeEnabledFeatures::OffscreenCanvasEnabled())
,
        offscreen_canvas_text_(RuntimeEnabledFeatures::OffscreenCanvasTextEnabled())
,
        on_device_change_(RuntimeEnabledFeatures::OnDeviceChangeEnabled())
,
        orientation_event_(RuntimeEnabledFeatures::OrientationEventEnabled())
,
        origin_manifest_(RuntimeEnabledFeatures::OriginManifestEnabled())
,
        origin_trials_(RuntimeEnabledFeatures::OriginTrialsEnabled())
,
        origin_trials_sample_api_(RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag())
,
        origin_trials_sample_api_implied_(RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag())
,
        out_of_blink_cors_(RuntimeEnabledFeatures::OutOfBlinkCORSEnabled())
,
        overflow_icons_for_media_controls_(RuntimeEnabledFeatures::OverflowIconsForMediaControlsEnabled())
,
        overlay_scrollbars_(RuntimeEnabledFeatures::OverlayScrollbarsEnabled())
,
        page_lifecycle_(RuntimeEnabledFeatures::PageLifecycleEnabled())
,
        page_popup_(RuntimeEnabledFeatures::PagePopupEnabled())
,
        paint_under_invalidation_checking_(RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled())
,
        partial_raster_invalidation_(RuntimeEnabledFeatures::PartialRasterInvalidationEnabled())
,
        passive_document_event_listeners_(RuntimeEnabledFeatures::PassiveDocumentEventListenersEnabled())
,
        pass_paint_visual_rect_to_compositor_(RuntimeEnabledFeatures::PassPaintVisualRectToCompositorEnabled())
,
        payment_app_(RuntimeEnabledFeatures::PaymentAppEnabled())
,
        payment_details_modifier_data_(RuntimeEnabledFeatures::PaymentDetailsModifierDataEnabled())
,
        payment_request_(RuntimeEnabledFeatures::PaymentRequestEnabled())
,
        payment_request_basic_card_(RuntimeEnabledFeatures::PaymentRequestBasicCardEnabled())
,
        performance_navigation_timing_2_(RuntimeEnabledFeatures::PerformanceNavigationTiming2Enabled())
,
        performance_paint_timing_(RuntimeEnabledFeatures::PerformancePaintTimingEnabled())
,
        permission_delegation_(RuntimeEnabledFeatures::PermissionDelegationEnabled())
,
        permissions_(RuntimeEnabledFeatures::PermissionsEnabled())
,
        permissions_request_revoke_(RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled())
,
        picture_in_picture_(RuntimeEnabledFeatures::PictureInPictureEnabled())
,
        picture_in_picture_api_(RuntimeEnabledFeatures::PictureInPictureAPIEnabledByRuntimeFlag())
,
        precise_memory_info_(RuntimeEnabledFeatures::PreciseMemoryInfoEnabled())
,
        preferred_image_raster_bounds_(RuntimeEnabledFeatures::PreferredImageRasterBoundsEnabled())
,
        prefixed_video_fullscreen_(RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled())
,
        preload_default_is_metadata_(RuntimeEnabledFeatures::PreloadDefaultIsMetadataEnabled())
,
        preload_image_src_set_(RuntimeEnabledFeatures::PreloadImageSrcSetEnabled())
,
        presentation_(RuntimeEnabledFeatures::PresentationEnabled())
,
        print_browser_(RuntimeEnabledFeatures::PrintBrowserEnabled())
,
        priority_hints_(RuntimeEnabledFeatures::PriorityHintsEnabled())
,
        push_messaging_(RuntimeEnabledFeatures::PushMessagingEnabled())
,
        pwa_full_code_cache_(RuntimeEnabledFeatures::PWAFullCodeCacheEnabled())
,
        raster_inducing_scroll_(RuntimeEnabledFeatures::RasterInducingScrollEnabled())
,
        reduced_referrer_granularity_(RuntimeEnabledFeatures::ReducedReferrerGranularityEnabled())
,
        remote_playback_(RuntimeEnabledFeatures::RemotePlaybackEnabled())
,
        remote_playback_backend_(RuntimeEnabledFeatures::RemotePlaybackBackendEnabled())
,
        rendering_pipeline_throttling_(RuntimeEnabledFeatures::RenderingPipelineThrottlingEnabled())
,
        rendering_pipeline_throttling_loading_iframes_(RuntimeEnabledFeatures::RenderingPipelineThrottlingLoadingIframesEnabled())
,
        render_unicode_control_characters_(RuntimeEnabledFeatures::RenderUnicodeControlCharactersEnabled())
,
        reporting_observer_(RuntimeEnabledFeatures::ReportingObserverEnabled())
,
        require_css_extension_for_file_(RuntimeEnabledFeatures::RequireCSSExtensionForFileEnabled())
,
        resize_observer_(RuntimeEnabledFeatures::ResizeObserverEnabled())
,
        resource_load_scheduler_(RuntimeEnabledFeatures::ResourceLoadSchedulerEnabled())
,
        restrict_app_cache_to_secure_contexts_(RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled())
,
        restrict_can_request_url_character_set_(RuntimeEnabledFeatures::RestrictCanRequestURLCharacterSetEnabled())
,
        root_layer_scrolling_(RuntimeEnabledFeatures::RootLayerScrollingEnabled())
,
        rtc_peer_connection_id_(RuntimeEnabledFeatures::RtcPeerConnectionIdEnabledByRuntimeFlag())
,
        rtc_rtp_sender_parameters_(RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled())
,
        rtc_unified_plan_(RuntimeEnabledFeatures::RTCUnifiedPlanEnabled())
,
        rtc_unified_plan_by_default_(RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled())
,
        scripted_speech_(RuntimeEnabledFeatures::ScriptedSpeechEnabled())
,
        scroll_anchor_serialization_(RuntimeEnabledFeatures::ScrollAnchorSerializationEnabled())
,
        scroll_customization_(RuntimeEnabledFeatures::ScrollCustomizationEnabled())
,
        scroll_top_left_interop_(RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled())
,
        sec_metadata_(RuntimeEnabledFeatures::SecMetadataEnabled())
,
        send_beacon_throw_for_blob_with_non_simple_type_(RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled())
,
        send_mouse_events_disabled_form_controls_(RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled())
,
        sensor_(RuntimeEnabledFeatures::SensorEnabledByRuntimeFlag())
,
        sensor_extra_classes_(RuntimeEnabledFeatures::SensorExtraClassesEnabled())
,
        server_timing_(RuntimeEnabledFeatures::ServerTimingEnabled())
,
        service_worker_script_full_code_cache_(RuntimeEnabledFeatures::ServiceWorkerScriptFullCodeCacheEnabled())
,
        service_worker_update_via_cache_(RuntimeEnabledFeatures::ServiceWorkerUpdateViaCacheEnabled())
,
        set_root_scroller_(RuntimeEnabledFeatures::SetRootScrollerEnabled())
,
        shadow_dom_v0_(RuntimeEnabledFeatures::ShadowDOMV0Enabled())
,
        shadow_piercing_descendant_combinator_(RuntimeEnabledFeatures::ShadowPiercingDescendantCombinatorEnabled())
,
        shape_detection_(RuntimeEnabledFeatures::ShapeDetectionEnabled())
,
        shared_array_buffer_(RuntimeEnabledFeatures::SharedArrayBufferEnabled())
,
        shared_worker_(RuntimeEnabledFeatures::SharedWorkerEnabled())
,
        signature_based_integrity_(RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag())
,
        slimming_paint_v_175_(RuntimeEnabledFeatures::SlimmingPaintV175Enabled())
,
        slimming_paint_v_2_(RuntimeEnabledFeatures::SlimmingPaintV2Enabled())
,
        slot_in_flat_tree_(RuntimeEnabledFeatures::SlotInFlatTreeEnabled())
,
        smil_(RuntimeEnabledFeatures::SMILEnabled())
,
        smooth_scroll_js_intervention_(RuntimeEnabledFeatures::SmoothScrollJSInterventionEnabled())
,
        stable_blink_features_(RuntimeEnabledFeatures::StableBlinkFeaturesEnabled())
,
        stacked_css_property_animations_(RuntimeEnabledFeatures::StackedCSSPropertyAnimationsEnabled())
,
        stop_in_background_(RuntimeEnabledFeatures::StopInBackgroundEnabled())
,
        stop_loading_in_background_(RuntimeEnabledFeatures::StopLoadingInBackgroundEnabled())
,
        stop_non_timers_in_background_(RuntimeEnabledFeatures::StopNonTimersInBackgroundEnabled())
,
        timer_throttling_for_background_tabs_(RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled())
,
        timer_throttling_for_hidden_frames_(RuntimeEnabledFeatures::TimerThrottlingForHiddenFramesEnabled())
,
        touch_event_feature_detection_(RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag())
,
        touchpad_and_wheel_scroll_latching_(RuntimeEnabledFeatures::TouchpadAndWheelScrollLatchingEnabled())
,
        track_layout_passes_per_block_(RuntimeEnabledFeatures::TrackLayoutPassesPerBlockEnabled())
,
        trusted_dom_types_(RuntimeEnabledFeatures::TrustedDOMTypesEnabled())
,
        trusted_events_default_action_(RuntimeEnabledFeatures::TrustedEventsDefaultActionEnabled())
,
        unclosed_form_control_is_invalid_(RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled())
,
        unified_touch_adjustment_(RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled())
,
        user_activation_v_2_(RuntimeEnabledFeatures::UserActivationV2Enabled())
,
        v8_context_snapshot_(RuntimeEnabledFeatures::V8ContextSnapshotEnabled())
,
        v8_idle_tasks_(RuntimeEnabledFeatures::V8IdleTasksEnabled())
,
        video_fullscreen_detection_(RuntimeEnabledFeatures::VideoFullscreenDetectionEnabled())
,
        video_fullscreen_orientation_lock_(RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled())
,
        video_rotate_to_fullscreen_(RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled())
,
        visibility_collapse_column_(RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled())
,
        visibility_collapse_row_(RuntimeEnabledFeatures::VisibilityCollapseRowEnabled())
,
        visual_viewport_api_(RuntimeEnabledFeatures::VisualViewportAPIEnabled())
,
        wake_lock_(RuntimeEnabledFeatures::WakeLockEnabled())
,
        web_animations_api_(RuntimeEnabledFeatures::WebAnimationsAPIEnabled())
,
        web_animations_svg_(RuntimeEnabledFeatures::WebAnimationsSVGEnabled())
,
        web_assembly_streaming_(RuntimeEnabledFeatures::WebAssemblyStreamingEnabled())
,
        web_auth_(RuntimeEnabledFeatures::WebAuthEnabled())
,
        web_bluetooth_(RuntimeEnabledFeatures::WebBluetoothEnabled())
,
        web_fonts_cache_aware_timeout_adaptation_(RuntimeEnabledFeatures::WebFontsCacheAwareTimeoutAdaptationEnabled())
,
        webgl_draft_extensions_(RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled())
,
        webgl_image_chromium_(RuntimeEnabledFeatures::WebGLImageChromiumEnabled())
,
        web_locks_api_(RuntimeEnabledFeatures::WebLocksAPIEnabledByRuntimeFlag())
,
        web_nfc_(RuntimeEnabledFeatures::WebNFCEnabled())
,
        web_rtc_vaapi_hwvp_8_encoding_(RuntimeEnabledFeatures::WebRtcVaapiHWVP8EncodingEnabledByRuntimeFlag())
,
        web_share_(RuntimeEnabledFeatures::WebShareEnabled())
,
        web_usb_(RuntimeEnabledFeatures::WebUSBEnabled())
,
        web_usb_on_dedicated_and_shared_workers_(RuntimeEnabledFeatures::WebUSBOnDedicatedAndSharedWorkersEnabled())
,
        web_vr_(RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag())
,
        web_vtt_regions_(RuntimeEnabledFeatures::WebVTTRegionsEnabled())
,
        web_xr_(RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag())
,
        web_xr_gamepad_support_(RuntimeEnabledFeatures::WebXRGamepadSupportEnabledByRuntimeFlag())
,
        web_xr_hit_test_(RuntimeEnabledFeatures::WebXRHitTestEnabled())
,
        worker_nosniff_block_(RuntimeEnabledFeatures::WorkerNosniffBlockEnabled())
,
        worker_nosniff_warn_(RuntimeEnabledFeatures::WorkerNosniffWarnEnabled())
,
        worklet_(RuntimeEnabledFeatures::WorkletEnabled())
,
        work_stealing_in_script_runner_(RuntimeEnabledFeatures::WorkStealingInScriptRunnerEnabled())
,
        xslt_(RuntimeEnabledFeatures::XSLTEnabled())
 {}

void RuntimeEnabledFeatures::Backup::Restore() {
  RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled(accelerated_2d_canvas_);
  RuntimeEnabledFeatures::SetAccessibilityObjectModelEnabled(accessibility_object_model_);
  RuntimeEnabledFeatures::SetAllowActivationDelegationAttrEnabled(allow_activation_delegation_attr_);
  RuntimeEnabledFeatures::SetAllowContentInitiatedDataUrlNavigationsEnabled(allow_content_initiated_data_url_navigations_);
  RuntimeEnabledFeatures::SetAnimationWorkletEnabled(animation_worklet_);
  RuntimeEnabledFeatures::SetAsyncClipboardEnabled(async_clipboard_);
  RuntimeEnabledFeatures::SetAsyncCookiesEnabled(async_cookies_);
  RuntimeEnabledFeatures::SetAudioOutputDevicesEnabled(audio_output_devices_);
  RuntimeEnabledFeatures::SetAudioVideoTracksEnabled(audio_video_tracks_);
  RuntimeEnabledFeatures::SetAudioWorkletEnabled(audio_worklet_);
  RuntimeEnabledFeatures::SetAutomationControlledEnabled(automation_controlled_);
  RuntimeEnabledFeatures::SetAutoplayIgnoresWebAudioEnabled(autoplay_ignores_web_audio_);
  RuntimeEnabledFeatures::SetAutoplayMutedVideosEnabled(autoplay_muted_videos_);
  RuntimeEnabledFeatures::SetBackgroundFetchEnabled(background_fetch_);
  RuntimeEnabledFeatures::SetBackgroundVideoTrackOptimizationEnabled(background_video_track_optimization_);
  RuntimeEnabledFeatures::SetBlinkGenPropertyTreesEnabled(blink_gen_property_trees_);
  RuntimeEnabledFeatures::SetBlinkRuntimeCallStatsEnabled(blink_runtime_call_stats_);
  RuntimeEnabledFeatures::SetBloatedRendererDetectionEnabled(bloated_renderer_detection_);
  RuntimeEnabledFeatures::SetBlockCredentialedSubresourcesEnabled(block_credentialed_subresources_);
  RuntimeEnabledFeatures::SetBlockingDownloadsInSandboxEnabled(blocking_downloads_in_sandbox_);
  RuntimeEnabledFeatures::SetBlockMetaSetCookieEnabled(block_meta_set_cookie_);
  RuntimeEnabledFeatures::SetBudgetEnabled(budget_);
  RuntimeEnabledFeatures::SetBudgetQueryEnabled(budget_query_);
  RuntimeEnabledFeatures::SetCacheInlineScriptCodeEnabled(cache_inline_script_code_);
  RuntimeEnabledFeatures::SetCacheStyleSheetWithMediaQueriesEnabled(cache_style_sheet_with_media_queries_);
  RuntimeEnabledFeatures::SetCanvas2dContextLostRestoredEnabled(canvas_2d_context_lost_restored_);
  RuntimeEnabledFeatures::SetCanvas2dFixedRenderingModeEnabled(canvas_2d_fixed_rendering_mode_);
  RuntimeEnabledFeatures::SetCanvas2dImageChromiumEnabled(canvas_2d_image_chromium_);
  RuntimeEnabledFeatures::SetCanvas2dScrollPathIntoViewEnabled(canvas_2d_scroll_path_into_view_);
  RuntimeEnabledFeatures::SetCanvasColorManagementEnabled(canvas_color_management_);
  RuntimeEnabledFeatures::SetCanvasHitRegionEnabled(canvas_hit_region_);
  RuntimeEnabledFeatures::SetCanvasImageSmoothingEnabled(canvas_image_smoothing_);
  RuntimeEnabledFeatures::SetClickRetargettingEnabled(click_retargetting_);
  RuntimeEnabledFeatures::SetClientHintsPersistentEnabled(client_hints_persistent_);
  RuntimeEnabledFeatures::SetClientPlaceholdersForServerLoFiEnabled(client_placeholders_for_server_lo_fi_);
  RuntimeEnabledFeatures::SetCompositedSelectionUpdateEnabled(composited_selection_update_);
  RuntimeEnabledFeatures::SetCompositeOpaqueFixedPositionEnabled(composite_opaque_fixed_position_);
  RuntimeEnabledFeatures::SetCompositeOpaqueScrollersEnabled(composite_opaque_scrollers_);
  RuntimeEnabledFeatures::SetCompositorTouchActionEnabled(compositor_touch_action_);
  RuntimeEnabledFeatures::SetComputedAccessibilityInfoEnabled(computed_accessibility_info_);
  RuntimeEnabledFeatures::SetConicGradientEnabled(conic_gradient_);
  RuntimeEnabledFeatures::SetConstructableStylesheetsEnabled(constructable_stylesheets_);
  RuntimeEnabledFeatures::SetContextMenuEnabled(context_menu_);
  RuntimeEnabledFeatures::SetCorsRFC1918Enabled(cors_rfc_1918_);
  RuntimeEnabledFeatures::SetCSS3TextEnabled(css_3_text_);
  RuntimeEnabledFeatures::SetCSSAdditiveAnimationsEnabled(css_additive_animations_);
  RuntimeEnabledFeatures::SetCSSBackdropFilterEnabled(css_backdrop_filter_);
  RuntimeEnabledFeatures::SetCSSDisplayContentsEnabled(css_display_contents_);
  RuntimeEnabledFeatures::SetCSSFocusVisibleEnabled(css_focus_visible_);
  RuntimeEnabledFeatures::SetCSSFontSizeAdjustEnabled(css_font_size_adjust_);
  RuntimeEnabledFeatures::SetCSSHexAlphaColorEnabled(css_hex_alpha_color_);
  RuntimeEnabledFeatures::SetCSSInBodyDoesNotBlockPaintEnabled(css_in_body_does_not_block_paint_);
  RuntimeEnabledFeatures::SetCSSIndependentTransformPropertiesEnabled(css_independent_transform_properties_);
  RuntimeEnabledFeatures::SetCSSLayoutAPIEnabled(css_layout_api_);
  RuntimeEnabledFeatures::SetCSSMaskSourceTypeEnabled(css_mask_source_type_);
  RuntimeEnabledFeatures::SetCSSMatchesEnabled(css_matches_);
  RuntimeEnabledFeatures::SetCSSOffsetPathRayEnabled(css_offset_path_ray_);
  RuntimeEnabledFeatures::SetCSSOffsetPathRayContainEnabled(css_offset_path_ray_contain_);
  RuntimeEnabledFeatures::SetCSSOffsetPositionAnchorEnabled(css_offset_position_anchor_);
  RuntimeEnabledFeatures::SetCSSOMSmoothScrollEnabled(cssom_smooth_scroll_);
  RuntimeEnabledFeatures::SetCSSOverscrollBehaviorEnabled(css_overscroll_behavior_);
  RuntimeEnabledFeatures::SetCSSPaintAPIEnabled(css_paint_api_);
  RuntimeEnabledFeatures::SetCSSPaintAPIArgumentsEnabled(css_paint_api_arguments_);
  RuntimeEnabledFeatures::SetCSSPartPseudoElementEnabled(css_part_pseudo_element_);
  RuntimeEnabledFeatures::SetCSSPseudoISEnabled(css_pseudo_is_);
  RuntimeEnabledFeatures::SetCSSScrollSnapPointsEnabled(css_scroll_snap_points_);
  RuntimeEnabledFeatures::SetCSSSnapSizeEnabled(css_snap_size_);
  RuntimeEnabledFeatures::SetCSSTransformBoxEnabled(css_transform_box_);
  RuntimeEnabledFeatures::SetCSSTypedOMEnabled(css_typed_om_);
  RuntimeEnabledFeatures::SetCSSVariables2Enabled(css_variables_2_);
  RuntimeEnabledFeatures::SetCSSViewportEnabled(css_viewport_);
  RuntimeEnabledFeatures::SetCustomElementDefaultStyleEnabled(custom_element_default_style_);
  RuntimeEnabledFeatures::SetCustomElementsBuiltinEnabled(custom_elements_builtin_);
  RuntimeEnabledFeatures::SetCustomElementsV0Enabled(custom_elements_v0_);
  RuntimeEnabledFeatures::SetCustomUserTimingEnabled(custom_user_timing_);
  RuntimeEnabledFeatures::SetDatabaseEnabled(database_);
  RuntimeEnabledFeatures::SetDecodeToYUVEnabled(decode_to_yuv_);
  RuntimeEnabledFeatures::SetDeprecationReportingEnabled(deprecation_reporting_);
  RuntimeEnabledFeatures::SetDesktopCaptureDisableLocalEchoControlEnabled(desktop_capture_disable_local_echo_control_);
  RuntimeEnabledFeatures::SetDeviceMemoryHeaderEnabled(device_memory_header_);
  RuntimeEnabledFeatures::SetDisableHardwareNoiseSuppressionEnabled(disable_hardware_noise_suppression_);
  RuntimeEnabledFeatures::SetDisablePaintChunksToCcLayerEnabled(disable_paint_chunks_to_cc_layer_);
  RuntimeEnabledFeatures::SetDisableRasterInvalidationEnabled(disable_raster_invalidation_);
  RuntimeEnabledFeatures::SetDisplayCutoutViewportFitEnabled(display_cutout_viewport_fit_);
  RuntimeEnabledFeatures::SetDisplayNoneIFrameCreatesNoLayoutObjectEnabled(display_none_iframe_creates_no_layout_object_);
  RuntimeEnabledFeatures::SetDocumentCookieEnabled(document_cookie_);
  RuntimeEnabledFeatures::SetDocumentDomainEnabled(document_domain_);
  RuntimeEnabledFeatures::SetDocumentWriteEnabled(document_write_);
  RuntimeEnabledFeatures::SetEmbedderCSPEnforcementEnabled(embedder_csp_enforcement_);
  RuntimeEnabledFeatures::SetEncryptedMediaHdcpPolicyCheckEnabled(encrypted_media_hdcp_policy_check_);
  RuntimeEnabledFeatures::SetEventTimingEnabled(event_timing_);
  RuntimeEnabledFeatures::SetExecCommandInJavaScriptEnabled(exec_command_in_java_script_);
  RuntimeEnabledFeatures::SetExpensiveBackgroundTimerThrottlingEnabled(expensive_background_timer_throttling_);
  RuntimeEnabledFeatures::SetExperimentalContentSecurityPolicyFeaturesEnabled(experimental_content_security_policy_features_);
  RuntimeEnabledFeatures::SetExperimentalHardwareEchoCancellationEnabled(experimental_hardware_echo_cancellation_);
  RuntimeEnabledFeatures::SetExperimentalProductivityFeaturesEnabled(experimental_productivity_features_);
  RuntimeEnabledFeatures::SetExperimentalV8ExtrasEnabled(experimental_v8_extras_);
  RuntimeEnabledFeatures::SetExtendedImageBitmapOptionsEnabled(extended_image_bitmap_options_);
  RuntimeEnabledFeatures::SetExtendedTextMetricsEnabled(extended_text_metrics_);
  RuntimeEnabledFeatures::SetExtraWebGLVideoTextureMetadataEnabled(extra_webgl_video_texture_metadata_);
  RuntimeEnabledFeatures::SetFastMobileScrollingEnabled(fast_mobile_scrolling_);
  RuntimeEnabledFeatures::SetFeaturePolicyAutoplayFeatureEnabled(feature_policy_autoplay_feature_);
  RuntimeEnabledFeatures::SetFeaturePolicyExperimentalFeaturesEnabled(feature_policy_experimental_features_);
  RuntimeEnabledFeatures::SetFeaturePolicyForPermissionsEnabled(feature_policy_for_permissions_);
  RuntimeEnabledFeatures::SetFeaturePolicyJavaScriptInterfaceEnabled(feature_policy_java_script_interface_);
  RuntimeEnabledFeatures::SetFeaturePolicyVibrateFeatureEnabled(feature_policy_vibrate_feature_);
  RuntimeEnabledFeatures::SetFetchRequestCacheEnabled(fetch_request_cache_);
  RuntimeEnabledFeatures::SetFetchRequestKeepaliveEnabled(fetch_request_keepalive_);
  RuntimeEnabledFeatures::SetFetchRequestSignalEnabled(fetch_request_signal_);
  RuntimeEnabledFeatures::SetFileSystemEnabled(file_system_);
  RuntimeEnabledFeatures::SetFocusOptionsEnabled(focus_options_);
  RuntimeEnabledFeatures::SetFontCacheScalingEnabled(font_cache_scaling_);
  RuntimeEnabledFeatures::SetForceOverlayFullscreenVideoEnabled(force_overlay_fullscreen_video_);
  RuntimeEnabledFeatures::SetForceTallerSelectPopupEnabled(force_taller_select_popup_);
  RuntimeEnabledFeatures::SetFormDataEventEnabled(form_data_event_);
  RuntimeEnabledFeatures::SetFractionalMouseEventEnabled(fractional_mouse_event_);
  RuntimeEnabledFeatures::SetFractionalMouseTypePointerEventEnabled(fractional_mouse_type_pointer_event_);
  RuntimeEnabledFeatures::SetFractionalScrollOffsetsEnabled(fractional_scroll_offsets_);
  RuntimeEnabledFeatures::SetFramebustingNeedsSameOriginOrUserGestureEnabled(framebusting_needs_same_origin_or_user_gesture_);
  RuntimeEnabledFeatures::SetFramesTimingFunctionEnabled(frames_timing_function_);
  RuntimeEnabledFeatures::SetFullscreenOptionsEnabled(fullscreen_options_);
  RuntimeEnabledFeatures::SetFullscreenUnprefixedEnabled(fullscreen_unprefixed_);
  RuntimeEnabledFeatures::SetGamepadExtensionsEnabled(gamepad_extensions_);
  RuntimeEnabledFeatures::SetGamepadVibrationEnabled(gamepad_vibration_);
  RuntimeEnabledFeatures::SetHeapCompactionEnabled(heap_compaction_);
  RuntimeEnabledFeatures::SetHeapIncrementalMarkingEnabled(heap_incremental_marking_);
  RuntimeEnabledFeatures::SetHeapIncrementalMarkingStressEnabled(heap_incremental_marking_stress_);
  RuntimeEnabledFeatures::SetHTMLImportsEnabled(html_imports_);
  RuntimeEnabledFeatures::SetHTMLImportsStyleApplicationEnabled(html_imports_style_application_);
  RuntimeEnabledFeatures::SetIDBObserverEnabled(idb_observer_);
  RuntimeEnabledFeatures::SetIdleTimeColdModeSpellCheckingEnabled(idle_time_cold_mode_spell_checking_);
  RuntimeEnabledFeatures::SetImageDecodingAttributeEnabled(image_decoding_attribute_);
  RuntimeEnabledFeatures::SetImageOrientationEnabled(image_orientation_);
  RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled(implicit_root_scroller_);
  RuntimeEnabledFeatures::SetIncrementalShadowDOMEnabled(incremental_shadow_dom_);
  RuntimeEnabledFeatures::SetInertAttributeEnabled(inert_attribute_);
  RuntimeEnabledFeatures::SetInputMultipleFieldsUIEnabled(input_multiple_fields_ui_);
  RuntimeEnabledFeatures::SetInstalledAppEnabled(installed_app_);
  RuntimeEnabledFeatures::SetIntersectionObserverGeometryMapperEnabled(intersection_observer_geometry_mapper_);
  RuntimeEnabledFeatures::SetIntersectionObserverV2Enabled(intersection_observer_v_2_);
  RuntimeEnabledFeatures::SetJSImageDecodeEnabled(js_image_decode_);
  RuntimeEnabledFeatures::SetKeyboardLockEnabled(keyboard_lock_);
  RuntimeEnabledFeatures::SetKeyboardMapEnabled(keyboard_map_);
  RuntimeEnabledFeatures::SetLangAttributeAwareFormControlUIEnabled(lang_attribute_aware_form_control_ui_);
  RuntimeEnabledFeatures::SetLayeredAPIEnabled(layered_api_);
  RuntimeEnabledFeatures::SetLayoutNGEnabled(layout_ng_);
  RuntimeEnabledFeatures::SetLayoutNGBlockFragmentationEnabled(layout_ng_block_fragmentation_);
  RuntimeEnabledFeatures::SetLayoutNGFlexBoxEnabled(layout_ng_flex_box_);
  RuntimeEnabledFeatures::SetLayoutNGFragmentCachingEnabled(layout_ng_fragment_caching_);
  RuntimeEnabledFeatures::SetLazyFrameLoadingEnabled(lazy_frame_loading_);
  RuntimeEnabledFeatures::SetLazyInitializeMediaControlsEnabled(lazy_initialize_media_controls_);
  RuntimeEnabledFeatures::SetLazyParseCSSEnabled(lazy_parse_css_);
  RuntimeEnabledFeatures::SetLoadingWithMojoEnabled(loading_with_mojo_);
  RuntimeEnabledFeatures::SetLongTaskObserverEnabled(long_task_observer_);
  RuntimeEnabledFeatures::SetLongTaskV2Enabled(long_task_v_2_);
  RuntimeEnabledFeatures::SetLowLatencyCanvasEnabled(low_latency_canvas_);
  RuntimeEnabledFeatures::SetMediaCapabilitiesEnabled(media_capabilities_);
  RuntimeEnabledFeatures::SetMediaCapabilitiesEncodingInfoEnabled(media_capabilities_encoding_info_);
  RuntimeEnabledFeatures::SetMediaCaptureEnabled(media_capture_);
  RuntimeEnabledFeatures::SetMediaCaptureDepthEnabled(media_capture_depth_);
  RuntimeEnabledFeatures::SetMediaCaptureDepthVideoKindEnabled(media_capture_depth_video_kind_);
  RuntimeEnabledFeatures::SetMediaCaptureFromVideoEnabled(media_capture_from_video_);
  RuntimeEnabledFeatures::SetMediaCastOverlayButtonEnabled(media_cast_overlay_button_);
  RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled(media_controls_overlay_play_button_);
  RuntimeEnabledFeatures::SetMediaDocumentDownloadButtonEnabled(media_document_download_button_);
  RuntimeEnabledFeatures::SetMediaEngagementBypassAutoplayPoliciesEnabled(media_engagement_bypass_autoplay_policies_);
  RuntimeEnabledFeatures::SetMediaQueryShapeEnabled(media_query_shape_);
  RuntimeEnabledFeatures::SetMediaSessionEnabled(media_session_);
  RuntimeEnabledFeatures::SetMediaSourceExperimentalEnabled(media_source_experimental_);
  RuntimeEnabledFeatures::SetMediaSourceNewAbortAndDurationEnabled(media_source_new_abort_and_duration_);
  RuntimeEnabledFeatures::SetMediaStreamTrackContentHintEnabled(media_stream_track_content_hint_);
  RuntimeEnabledFeatures::SetMiddleClickAutoscrollEnabled(middle_click_autoscroll_);
  RuntimeEnabledFeatures::SetMobileLayoutThemeEnabled(mobile_layout_theme_);
  RuntimeEnabledFeatures::SetModernMediaControlsEnabled(modern_media_controls_);
  RuntimeEnabledFeatures::SetModuleDedicatedWorkerEnabled(module_dedicated_worker_);
  RuntimeEnabledFeatures::SetModulePreloadEnabled(module_preload_);
  RuntimeEnabledFeatures::SetModuleScriptsDynamicImportEnabled(module_scripts_dynamic_import_);
  RuntimeEnabledFeatures::SetModuleScriptsImportMetaUrlEnabled(module_scripts_import_meta_url_);
  RuntimeEnabledFeatures::SetMojoBlobURLsEnabled(mojo_blob_ur_ls_);
  RuntimeEnabledFeatures::SetMojoJSEnabled(mojo_js_);
  RuntimeEnabledFeatures::SetMojoJSTestEnabled(mojo_js_test_);
  RuntimeEnabledFeatures::SetMultipleColorStopPositionsEnabled(multiple_color_stop_positions_);
  RuntimeEnabledFeatures::SetNavigatorContentUtilsEnabled(navigator_content_utils_);
  RuntimeEnabledFeatures::SetNavigatorDeviceMemoryEnabled(navigator_device_memory_);
  RuntimeEnabledFeatures::SetNetInfoDownlinkEnabled(net_info_downlink_);
  RuntimeEnabledFeatures::SetNetInfoDownlinkHeaderEnabled(net_info_downlink_header_);
  RuntimeEnabledFeatures::SetNetInfoDownlinkMaxEnabled(net_info_downlink_max_);
  RuntimeEnabledFeatures::SetNetInfoEffectiveTypeEnabled(net_info_effective_type_);
  RuntimeEnabledFeatures::SetNetInfoEffectiveTypeHeaderEnabled(net_info_effective_type_header_);
  RuntimeEnabledFeatures::SetNetInfoRttEnabled(net_info_rtt_);
  RuntimeEnabledFeatures::SetNetInfoRttHeaderEnabled(net_info_rtt_header_);
  RuntimeEnabledFeatures::SetNetInfoSaveDataEnabled(net_info_save_data_);
  RuntimeEnabledFeatures::SetNetworkServiceEnabled(network_service_);
  RuntimeEnabledFeatures::SetNewRemotePlaybackPipelineEnabled(new_remote_playback_pipeline_);
  RuntimeEnabledFeatures::SetNotificationConstructorEnabled(notification_constructor_);
  RuntimeEnabledFeatures::SetNotificationContentImageEnabled(notification_content_image_);
  RuntimeEnabledFeatures::SetNotificationInlineRepliesEnabled(notification_inline_replies_);
  RuntimeEnabledFeatures::SetNotificationsEnabled(notifications_);
  RuntimeEnabledFeatures::SetNullableDocumentDomainEnabled(nullable_document_domain_);
  RuntimeEnabledFeatures::SetOffMainThreadWebSocketEnabled(off_main_thread_websocket_);
  RuntimeEnabledFeatures::SetOffscreenCanvasEnabled(offscreen_canvas_);
  RuntimeEnabledFeatures::SetOffscreenCanvasTextEnabled(offscreen_canvas_text_);
  RuntimeEnabledFeatures::SetOnDeviceChangeEnabled(on_device_change_);
  RuntimeEnabledFeatures::SetOrientationEventEnabled(orientation_event_);
  RuntimeEnabledFeatures::SetOriginManifestEnabled(origin_manifest_);
  RuntimeEnabledFeatures::SetOriginTrialsEnabled(origin_trials_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPIEnabled(origin_trials_sample_api_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPIImpliedEnabled(origin_trials_sample_api_implied_);
  RuntimeEnabledFeatures::SetOutOfBlinkCORSEnabled(out_of_blink_cors_);
  RuntimeEnabledFeatures::SetOverflowIconsForMediaControlsEnabled(overflow_icons_for_media_controls_);
  RuntimeEnabledFeatures::SetOverlayScrollbarsEnabled(overlay_scrollbars_);
  RuntimeEnabledFeatures::SetPageLifecycleEnabled(page_lifecycle_);
  RuntimeEnabledFeatures::SetPagePopupEnabled(page_popup_);
  RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled(paint_under_invalidation_checking_);
  RuntimeEnabledFeatures::SetPartialRasterInvalidationEnabled(partial_raster_invalidation_);
  RuntimeEnabledFeatures::SetPassiveDocumentEventListenersEnabled(passive_document_event_listeners_);
  RuntimeEnabledFeatures::SetPassPaintVisualRectToCompositorEnabled(pass_paint_visual_rect_to_compositor_);
  RuntimeEnabledFeatures::SetPaymentAppEnabled(payment_app_);
  RuntimeEnabledFeatures::SetPaymentDetailsModifierDataEnabled(payment_details_modifier_data_);
  RuntimeEnabledFeatures::SetPaymentRequestEnabled(payment_request_);
  RuntimeEnabledFeatures::SetPaymentRequestBasicCardEnabled(payment_request_basic_card_);
  RuntimeEnabledFeatures::SetPerformanceNavigationTiming2Enabled(performance_navigation_timing_2_);
  RuntimeEnabledFeatures::SetPerformancePaintTimingEnabled(performance_paint_timing_);
  RuntimeEnabledFeatures::SetPermissionDelegationEnabled(permission_delegation_);
  RuntimeEnabledFeatures::SetPermissionsEnabled(permissions_);
  RuntimeEnabledFeatures::SetPermissionsRequestRevokeEnabled(permissions_request_revoke_);
  RuntimeEnabledFeatures::SetPictureInPictureEnabled(picture_in_picture_);
  RuntimeEnabledFeatures::SetPictureInPictureAPIEnabled(picture_in_picture_api_);
  RuntimeEnabledFeatures::SetPreciseMemoryInfoEnabled(precise_memory_info_);
  RuntimeEnabledFeatures::SetPreferredImageRasterBoundsEnabled(preferred_image_raster_bounds_);
  RuntimeEnabledFeatures::SetPrefixedVideoFullscreenEnabled(prefixed_video_fullscreen_);
  RuntimeEnabledFeatures::SetPreloadDefaultIsMetadataEnabled(preload_default_is_metadata_);
  RuntimeEnabledFeatures::SetPreloadImageSrcSetEnabled(preload_image_src_set_);
  RuntimeEnabledFeatures::SetPresentationEnabled(presentation_);
  RuntimeEnabledFeatures::SetPrintBrowserEnabled(print_browser_);
  RuntimeEnabledFeatures::SetPriorityHintsEnabled(priority_hints_);
  RuntimeEnabledFeatures::SetPushMessagingEnabled(push_messaging_);
  RuntimeEnabledFeatures::SetPWAFullCodeCacheEnabled(pwa_full_code_cache_);
  RuntimeEnabledFeatures::SetRasterInducingScrollEnabled(raster_inducing_scroll_);
  RuntimeEnabledFeatures::SetReducedReferrerGranularityEnabled(reduced_referrer_granularity_);
  RuntimeEnabledFeatures::SetRemotePlaybackEnabled(remote_playback_);
  RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled(remote_playback_backend_);
  RuntimeEnabledFeatures::SetRenderingPipelineThrottlingEnabled(rendering_pipeline_throttling_);
  RuntimeEnabledFeatures::SetRenderingPipelineThrottlingLoadingIframesEnabled(rendering_pipeline_throttling_loading_iframes_);
  RuntimeEnabledFeatures::SetRenderUnicodeControlCharactersEnabled(render_unicode_control_characters_);
  RuntimeEnabledFeatures::SetReportingObserverEnabled(reporting_observer_);
  RuntimeEnabledFeatures::SetRequireCSSExtensionForFileEnabled(require_css_extension_for_file_);
  RuntimeEnabledFeatures::SetResizeObserverEnabled(resize_observer_);
  RuntimeEnabledFeatures::SetResourceLoadSchedulerEnabled(resource_load_scheduler_);
  RuntimeEnabledFeatures::SetRestrictAppCacheToSecureContextsEnabled(restrict_app_cache_to_secure_contexts_);
  RuntimeEnabledFeatures::SetRestrictCanRequestURLCharacterSetEnabled(restrict_can_request_url_character_set_);
  RuntimeEnabledFeatures::SetRootLayerScrollingEnabled(root_layer_scrolling_);
  RuntimeEnabledFeatures::SetRtcPeerConnectionIdEnabled(rtc_peer_connection_id_);
  RuntimeEnabledFeatures::SetRTCRtpSenderParametersEnabled(rtc_rtp_sender_parameters_);
  RuntimeEnabledFeatures::SetRTCUnifiedPlanEnabled(rtc_unified_plan_);
  RuntimeEnabledFeatures::SetRTCUnifiedPlanByDefaultEnabled(rtc_unified_plan_by_default_);
  RuntimeEnabledFeatures::SetScriptedSpeechEnabled(scripted_speech_);
  RuntimeEnabledFeatures::SetScrollAnchorSerializationEnabled(scroll_anchor_serialization_);
  RuntimeEnabledFeatures::SetScrollCustomizationEnabled(scroll_customization_);
  RuntimeEnabledFeatures::SetScrollTopLeftInteropEnabled(scroll_top_left_interop_);
  RuntimeEnabledFeatures::SetSecMetadataEnabled(sec_metadata_);
  RuntimeEnabledFeatures::SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled(send_beacon_throw_for_blob_with_non_simple_type_);
  RuntimeEnabledFeatures::SetSendMouseEventsDisabledFormControlsEnabled(send_mouse_events_disabled_form_controls_);
  RuntimeEnabledFeatures::SetSensorEnabled(sensor_);
  RuntimeEnabledFeatures::SetSensorExtraClassesEnabled(sensor_extra_classes_);
  RuntimeEnabledFeatures::SetServerTimingEnabled(server_timing_);
  RuntimeEnabledFeatures::SetServiceWorkerScriptFullCodeCacheEnabled(service_worker_script_full_code_cache_);
  RuntimeEnabledFeatures::SetServiceWorkerUpdateViaCacheEnabled(service_worker_update_via_cache_);
  RuntimeEnabledFeatures::SetSetRootScrollerEnabled(set_root_scroller_);
  RuntimeEnabledFeatures::SetShadowDOMV0Enabled(shadow_dom_v0_);
  RuntimeEnabledFeatures::SetShadowPiercingDescendantCombinatorEnabled(shadow_piercing_descendant_combinator_);
  RuntimeEnabledFeatures::SetShapeDetectionEnabled(shape_detection_);
  RuntimeEnabledFeatures::SetSharedArrayBufferEnabled(shared_array_buffer_);
  RuntimeEnabledFeatures::SetSharedWorkerEnabled(shared_worker_);
  RuntimeEnabledFeatures::SetSignatureBasedIntegrityEnabled(signature_based_integrity_);
  RuntimeEnabledFeatures::SetSlimmingPaintV175Enabled(slimming_paint_v_175_);
  RuntimeEnabledFeatures::SetSlimmingPaintV2Enabled(slimming_paint_v_2_);
  RuntimeEnabledFeatures::SetSlotInFlatTreeEnabled(slot_in_flat_tree_);
  RuntimeEnabledFeatures::SetSMILEnabled(smil_);
  RuntimeEnabledFeatures::SetSmoothScrollJSInterventionEnabled(smooth_scroll_js_intervention_);
  RuntimeEnabledFeatures::SetStableBlinkFeaturesEnabled(stable_blink_features_);
  RuntimeEnabledFeatures::SetStackedCSSPropertyAnimationsEnabled(stacked_css_property_animations_);
  RuntimeEnabledFeatures::SetStopInBackgroundEnabled(stop_in_background_);
  RuntimeEnabledFeatures::SetStopLoadingInBackgroundEnabled(stop_loading_in_background_);
  RuntimeEnabledFeatures::SetStopNonTimersInBackgroundEnabled(stop_non_timers_in_background_);
  RuntimeEnabledFeatures::SetTimerThrottlingForBackgroundTabsEnabled(timer_throttling_for_background_tabs_);
  RuntimeEnabledFeatures::SetTimerThrottlingForHiddenFramesEnabled(timer_throttling_for_hidden_frames_);
  RuntimeEnabledFeatures::SetTouchEventFeatureDetectionEnabled(touch_event_feature_detection_);
  RuntimeEnabledFeatures::SetTouchpadAndWheelScrollLatchingEnabled(touchpad_and_wheel_scroll_latching_);
  RuntimeEnabledFeatures::SetTrackLayoutPassesPerBlockEnabled(track_layout_passes_per_block_);
  RuntimeEnabledFeatures::SetTrustedDOMTypesEnabled(trusted_dom_types_);
  RuntimeEnabledFeatures::SetTrustedEventsDefaultActionEnabled(trusted_events_default_action_);
  RuntimeEnabledFeatures::SetUnclosedFormControlIsInvalidEnabled(unclosed_form_control_is_invalid_);
  RuntimeEnabledFeatures::SetUnifiedTouchAdjustmentEnabled(unified_touch_adjustment_);
  RuntimeEnabledFeatures::SetUserActivationV2Enabled(user_activation_v_2_);
  RuntimeEnabledFeatures::SetV8ContextSnapshotEnabled(v8_context_snapshot_);
  RuntimeEnabledFeatures::SetV8IdleTasksEnabled(v8_idle_tasks_);
  RuntimeEnabledFeatures::SetVideoFullscreenDetectionEnabled(video_fullscreen_detection_);
  RuntimeEnabledFeatures::SetVideoFullscreenOrientationLockEnabled(video_fullscreen_orientation_lock_);
  RuntimeEnabledFeatures::SetVideoRotateToFullscreenEnabled(video_rotate_to_fullscreen_);
  RuntimeEnabledFeatures::SetVisibilityCollapseColumnEnabled(visibility_collapse_column_);
  RuntimeEnabledFeatures::SetVisibilityCollapseRowEnabled(visibility_collapse_row_);
  RuntimeEnabledFeatures::SetVisualViewportAPIEnabled(visual_viewport_api_);
  RuntimeEnabledFeatures::SetWakeLockEnabled(wake_lock_);
  RuntimeEnabledFeatures::SetWebAnimationsAPIEnabled(web_animations_api_);
  RuntimeEnabledFeatures::SetWebAnimationsSVGEnabled(web_animations_svg_);
  RuntimeEnabledFeatures::SetWebAssemblyStreamingEnabled(web_assembly_streaming_);
  RuntimeEnabledFeatures::SetWebAuthEnabled(web_auth_);
  RuntimeEnabledFeatures::SetWebBluetoothEnabled(web_bluetooth_);
  RuntimeEnabledFeatures::SetWebFontsCacheAwareTimeoutAdaptationEnabled(web_fonts_cache_aware_timeout_adaptation_);
  RuntimeEnabledFeatures::SetWebGLDraftExtensionsEnabled(webgl_draft_extensions_);
  RuntimeEnabledFeatures::SetWebGLImageChromiumEnabled(webgl_image_chromium_);
  RuntimeEnabledFeatures::SetWebLocksAPIEnabled(web_locks_api_);
  RuntimeEnabledFeatures::SetWebNFCEnabled(web_nfc_);
  RuntimeEnabledFeatures::SetWebRtcVaapiHWVP8EncodingEnabled(web_rtc_vaapi_hwvp_8_encoding_);
  RuntimeEnabledFeatures::SetWebShareEnabled(web_share_);
  RuntimeEnabledFeatures::SetWebUSBEnabled(web_usb_);
  RuntimeEnabledFeatures::SetWebUSBOnDedicatedAndSharedWorkersEnabled(web_usb_on_dedicated_and_shared_workers_);
  RuntimeEnabledFeatures::SetWebVREnabled(web_vr_);
  RuntimeEnabledFeatures::SetWebVTTRegionsEnabled(web_vtt_regions_);
  RuntimeEnabledFeatures::SetWebXREnabled(web_xr_);
  RuntimeEnabledFeatures::SetWebXRGamepadSupportEnabled(web_xr_gamepad_support_);
  RuntimeEnabledFeatures::SetWebXRHitTestEnabled(web_xr_hit_test_);
  RuntimeEnabledFeatures::SetWorkerNosniffBlockEnabled(worker_nosniff_block_);
  RuntimeEnabledFeatures::SetWorkerNosniffWarnEnabled(worker_nosniff_warn_);
  RuntimeEnabledFeatures::SetWorkletEnabled(worklet_);
  RuntimeEnabledFeatures::SetWorkStealingInScriptRunnerEnabled(work_stealing_in_script_runner_);
  RuntimeEnabledFeatures::SetXSLTEnabled(xslt_);
}

void RuntimeEnabledFeatures::SetStableFeaturesEnabled(bool enable) {
  SetAccelerated2dCanvasEnabled(enable);
  SetAllowContentInitiatedDataUrlNavigationsEnabled(enable);
  SetAudioOutputDevicesEnabled(enable);
  SetAudioWorkletEnabled(enable);
  SetBackgroundVideoTrackOptimizationEnabled(enable);
  SetBlockCredentialedSubresourcesEnabled(enable);
  SetBlockMetaSetCookieEnabled(enable);
  SetBudgetEnabled(enable);
  SetClientHintsPersistentEnabled(enable);
  SetCompositeOpaqueScrollersEnabled(enable);
  SetCSSDisplayContentsEnabled(enable);
  SetCSSHexAlphaColorEnabled(enable);
  SetCSSOMSmoothScrollEnabled(enable);
  SetCSSOverscrollBehaviorEnabled(enable);
  SetCSSPaintAPIEnabled(enable);
  SetCSSTransformBoxEnabled(enable);
  SetCSSTypedOMEnabled(enable);
  SetCustomElementsBuiltinEnabled(enable);
  SetCustomElementsV0Enabled(enable);
  SetDatabaseEnabled(enable);
  SetDeviceMemoryHeaderEnabled(enable);
  SetDisplayNoneIFrameCreatesNoLayoutObjectEnabled(enable);
  SetEmbedderCSPEnforcementEnabled(enable);
  SetExpensiveBackgroundTimerThrottlingEnabled(enable);
  SetFeaturePolicyAutoplayFeatureEnabled(enable);
  SetFeaturePolicyForPermissionsEnabled(enable);
  SetFetchRequestCacheEnabled(enable);
  SetFetchRequestKeepaliveEnabled(enable);
  SetFetchRequestSignalEnabled(enable);
  SetFileSystemEnabled(enable);
  SetFocusOptionsEnabled(enable);
  SetFractionalMouseTypePointerEventEnabled(enable);
  SetFramebustingNeedsSameOriginOrUserGestureEnabled(enable);
  SetHeapCompactionEnabled(enable);
  SetHTMLImportsEnabled(enable);
  SetHTMLImportsStyleApplicationEnabled(enable);
  SetIdleTimeColdModeSpellCheckingEnabled(enable);
  SetImageDecodingAttributeEnabled(enable);
  SetInputMultipleFieldsUIEnabled(enable);
  SetJSImageDecodeEnabled(enable);
  SetKeyboardLockEnabled(enable);
  SetLoadingWithMojoEnabled(enable);
  SetLongTaskObserverEnabled(enable);
  SetMediaCapabilitiesEnabled(enable);
  SetMediaCaptureFromVideoEnabled(enable);
  SetModulePreloadEnabled(enable);
  SetNavigatorDeviceMemoryEnabled(enable);
  SetNetInfoDownlinkEnabled(enable);
  SetNetInfoDownlinkMaxEnabled(enable);
  SetNetInfoEffectiveTypeEnabled(enable);
  SetNetInfoRttEnabled(enable);
  SetNetInfoSaveDataEnabled(enable);
  SetNotificationConstructorEnabled(enable);
  SetNotificationsEnabled(enable);
  SetOnDeviceChangeEnabled(enable);
  SetOriginTrialsEnabled(enable);
  SetPageLifecycleEnabled(enable);
  SetPagePopupEnabled(enable);
  SetPassiveDocumentEventListenersEnabled(enable);
  SetPaymentDetailsModifierDataEnabled(enable);
  SetPaymentRequestBasicCardEnabled(enable);
  SetPerformanceNavigationTiming2Enabled(enable);
  SetPerformancePaintTimingEnabled(enable);
  SetPermissionsEnabled(enable);
  SetPrefixedVideoFullscreenEnabled(enable);
  SetPreloadDefaultIsMetadataEnabled(enable);
  SetPresentationEnabled(enable);
  SetPushMessagingEnabled(enable);
  SetRemotePlaybackEnabled(enable);
  SetRenderingPipelineThrottlingEnabled(enable);
  SetRenderingPipelineThrottlingLoadingIframesEnabled(enable);
  SetRenderUnicodeControlCharactersEnabled(enable);
  SetRequireCSSExtensionForFileEnabled(enable);
  SetResizeObserverEnabled(enable);
  SetRestrictCanRequestURLCharacterSetEnabled(enable);
  SetRootLayerScrollingEnabled(enable);
  SetRTCRtpSenderParametersEnabled(enable);
  SetRTCUnifiedPlanEnabled(enable);
  SetScriptedSpeechEnabled(enable);
  SetScrollTopLeftInteropEnabled(enable);
  SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled(enable);
  SetServerTimingEnabled(enable);
  SetServiceWorkerUpdateViaCacheEnabled(enable);
  SetShadowDOMV0Enabled(enable);
  SetSharedArrayBufferEnabled(enable);
  SetSharedWorkerEnabled(enable);
  SetSlimmingPaintV175Enabled(enable);
  SetSlotInFlatTreeEnabled(enable);
  SetSMILEnabled(enable);
  SetSmoothScrollJSInterventionEnabled(enable);
  SetStableBlinkFeaturesEnabled(enable);
  SetTimerThrottlingForBackgroundTabsEnabled(enable);
  SetTimerThrottlingForHiddenFramesEnabled(enable);
  SetTouchEventFeatureDetectionEnabled(enable);
  SetTrustedEventsDefaultActionEnabled(enable);
  SetUnifiedTouchAdjustmentEnabled(enable);
  SetVisibilityCollapseRowEnabled(enable);
  SetVisualViewportAPIEnabled(enable);
  SetWebUSBEnabled(enable);
  SetWorkletEnabled(enable);
  SetXSLTEnabled(enable);
}

void RuntimeEnabledFeatures::SetExperimentalFeaturesEnabled(bool enable) {
  SetAccessibilityObjectModelEnabled(enable);
  SetAnimationWorkletEnabled(enable);
  SetAsyncClipboardEnabled(enable);
  SetAsyncCookiesEnabled(enable);
  SetAudioVideoTracksEnabled(enable);
  SetBackgroundFetchEnabled(enable);
  SetBloatedRendererDetectionEnabled(enable);
  SetBudgetQueryEnabled(enable);
  SetCacheStyleSheetWithMediaQueriesEnabled(enable);
  SetCanvas2dContextLostRestoredEnabled(enable);
  SetCanvas2dScrollPathIntoViewEnabled(enable);
  SetCanvasColorManagementEnabled(enable);
  SetCanvasHitRegionEnabled(enable);
  SetCanvasImageSmoothingEnabled(enable);
  SetClickRetargettingEnabled(enable);
  SetCompositeOpaqueFixedPositionEnabled(enable);
  SetComputedAccessibilityInfoEnabled(enable);
  SetConicGradientEnabled(enable);
  SetConstructableStylesheetsEnabled(enable);
  SetContextMenuEnabled(enable);
  SetCSS3TextEnabled(enable);
  SetCSSAdditiveAnimationsEnabled(enable);
  SetCSSBackdropFilterEnabled(enable);
  SetCSSFocusVisibleEnabled(enable);
  SetCSSFontSizeAdjustEnabled(enable);
  SetCSSInBodyDoesNotBlockPaintEnabled(enable);
  SetCSSIndependentTransformPropertiesEnabled(enable);
  SetCSSLayoutAPIEnabled(enable);
  SetCSSMaskSourceTypeEnabled(enable);
  SetCSSMatchesEnabled(enable);
  SetCSSOffsetPathRayEnabled(enable);
  SetCSSOffsetPathRayContainEnabled(enable);
  SetCSSOffsetPositionAnchorEnabled(enable);
  SetCSSPaintAPIArgumentsEnabled(enable);
  SetCSSPartPseudoElementEnabled(enable);
  SetCSSPseudoISEnabled(enable);
  SetCSSScrollSnapPointsEnabled(enable);
  SetCSSSnapSizeEnabled(enable);
  SetCSSVariables2Enabled(enable);
  SetCSSViewportEnabled(enable);
  SetCustomElementDefaultStyleEnabled(enable);
  SetDecodeToYUVEnabled(enable);
  SetDeprecationReportingEnabled(enable);
  SetDesktopCaptureDisableLocalEchoControlEnabled(enable);
  SetDisableHardwareNoiseSuppressionEnabled(enable);
  SetExperimentalContentSecurityPolicyFeaturesEnabled(enable);
  SetExperimentalHardwareEchoCancellationEnabled(enable);
  SetExperimentalProductivityFeaturesEnabled(enable);
  SetExperimentalV8ExtrasEnabled(enable);
  SetExtendedImageBitmapOptionsEnabled(enable);
  SetExtendedTextMetricsEnabled(enable);
  SetExtraWebGLVideoTextureMetadataEnabled(enable);
  SetFeaturePolicyExperimentalFeaturesEnabled(enable);
  SetFeaturePolicyJavaScriptInterfaceEnabled(enable);
  SetFormDataEventEnabled(enable);
  SetFramesTimingFunctionEnabled(enable);
  SetFullscreenOptionsEnabled(enable);
  SetFullscreenUnprefixedEnabled(enable);
  SetGamepadExtensionsEnabled(enable);
  SetGamepadVibrationEnabled(enable);
  SetIDBObserverEnabled(enable);
  SetImplicitRootScrollerEnabled(enable);
  SetIncrementalShadowDOMEnabled(enable);
  SetInertAttributeEnabled(enable);
  SetInstalledAppEnabled(enable);
  SetKeyboardMapEnabled(enable);
  SetLazyParseCSSEnabled(enable);
  SetLowLatencyCanvasEnabled(enable);
  SetMediaCapabilitiesEncodingInfoEnabled(enable);
  SetMediaCaptureDepthEnabled(enable);
  SetMediaCaptureDepthVideoKindEnabled(enable);
  SetMediaQueryShapeEnabled(enable);
  SetMediaSourceExperimentalEnabled(enable);
  SetMediaSourceNewAbortAndDurationEnabled(enable);
  SetMediaStreamTrackContentHintEnabled(enable);
  SetModuleDedicatedWorkerEnabled(enable);
  SetMultipleColorStopPositionsEnabled(enable);
  SetNetInfoDownlinkHeaderEnabled(enable);
  SetNetInfoEffectiveTypeHeaderEnabled(enable);
  SetNetInfoRttHeaderEnabled(enable);
  SetNotificationInlineRepliesEnabled(enable);
  SetNullableDocumentDomainEnabled(enable);
  SetOffscreenCanvasEnabled(enable);
  SetOffscreenCanvasTextEnabled(enable);
  SetPaymentAppEnabled(enable);
  SetPaymentRequestEnabled(enable);
  SetPermissionsRequestRevokeEnabled(enable);
  SetPictureInPictureAPIEnabled(enable);
  SetPreloadImageSrcSetEnabled(enable);
  SetPriorityHintsEnabled(enable);
  SetRasterInducingScrollEnabled(enable);
  SetReportingObserverEnabled(enable);
  SetResourceLoadSchedulerEnabled(enable);
  SetRestrictAppCacheToSecureContextsEnabled(enable);
  SetRtcPeerConnectionIdEnabled(enable);
  SetSecMetadataEnabled(enable);
  SetSendMouseEventsDisabledFormControlsEnabled(enable);
  SetSensorEnabled(enable);
  SetSensorExtraClassesEnabled(enable);
  SetSetRootScrollerEnabled(enable);
  SetShadowPiercingDescendantCombinatorEnabled(enable);
  SetShapeDetectionEnabled(enable);
  SetSignatureBasedIntegrityEnabled(enable);
  SetStackedCSSPropertyAnimationsEnabled(enable);
  SetTrustedDOMTypesEnabled(enable);
  SetUnclosedFormControlIsInvalidEnabled(enable);
  SetVisibilityCollapseColumnEnabled(enable);
  SetWakeLockEnabled(enable);
  SetWebAnimationsAPIEnabled(enable);
  SetWebAnimationsSVGEnabled(enable);
  SetWebAssemblyStreamingEnabled(enable);
  SetWebAuthEnabled(enable);
  SetWebBluetoothEnabled(enable);
  SetWebFontsCacheAwareTimeoutAdaptationEnabled(enable);
  SetWebGLDraftExtensionsEnabled(enable);
  SetWebLocksAPIEnabled(enable);
  SetWebNFCEnabled(enable);
  SetWebRtcVaapiHWVP8EncodingEnabled(enable);
  SetWebShareEnabled(enable);
  SetWebVREnabled(enable);
  SetWebVTTRegionsEnabled(enable);
  SetWebXREnabled(enable);
  SetWebXRGamepadSupportEnabled(enable);
  SetWorkStealingInScriptRunnerEnabled(enable);
}

void RuntimeEnabledFeatures::SetTestFeaturesEnabled(bool enable) {
  SetCanvas2dFixedRenderingModeEnabled(enable);
  SetCompositorTouchActionEnabled(enable);
  SetEncryptedMediaHdcpPolicyCheckEnabled(enable);
  SetEventTimingEnabled(enable);
  SetExecCommandInJavaScriptEnabled(enable);
  SetFontCacheScalingEnabled(enable);
  SetImageOrientationEnabled(enable);
  SetMediaSessionEnabled(enable);
  SetMiddleClickAutoscrollEnabled(enable);
  SetMojoJSEnabled(enable);
  SetMojoJSTestEnabled(enable);
  SetNotificationContentImageEnabled(enable);
  SetOriginManifestEnabled(enable);
  SetPermissionDelegationEnabled(enable);
  SetStopInBackgroundEnabled(enable);
  SetStopLoadingInBackgroundEnabled(enable);
  SetStopNonTimersInBackgroundEnabled(enable);
  SetV8ContextSnapshotEnabled(enable);
  SetWebUSBOnDedicatedAndSharedWorkersEnabled(enable);
  SetWorkerNosniffBlockEnabled(enable);
  SetWorkerNosniffWarnEnabled(enable);
}


void RuntimeEnabledFeatures::SetOriginTrialControlledFeaturesEnabled(bool enable) {
  SetAnimationWorkletEnabled(enable);
  SetBudgetQueryEnabled(enable);
  SetDisableHardwareNoiseSuppressionEnabled(enable);
  SetExperimentalHardwareEchoCancellationEnabled(enable);
  SetGamepadExtensionsEnabled(enable);
  SetInstalledAppEnabled(enable);
  SetLowLatencyCanvasEnabled(enable);
  SetMediaCapabilitiesEnabled(enable);
  SetOriginTrialsSampleAPIEnabled(enable);
  SetOriginTrialsSampleAPIImpliedEnabled(enable);
  SetPictureInPictureAPIEnabled(enable);
  SetRtcPeerConnectionIdEnabled(enable);
  SetSensorEnabled(enable);
  SetSignatureBasedIntegrityEnabled(enable);
  SetTouchEventFeatureDetectionEnabled(enable);
  SetWebLocksAPIEnabled(enable);
  SetWebRtcVaapiHWVP8EncodingEnabled(enable);
  SetWebVREnabled(enable);
  SetWebXREnabled(enable);
  SetWebXRGamepadSupportEnabled(enable);
}

void RuntimeEnabledFeatures::SetFeatureEnabledFromString(
    const std::string& name, bool enable) {
  static const struct {
    const char* name;
    bool* setting;
  } kFeatures[] = {
    {"Accelerated2dCanvas", &is_accelerated_2d_canvas_enabled_},
    {"AccessibilityObjectModel", &is_accessibility_object_model_enabled_},
    {"AllowActivationDelegationAttr", &is_allow_activation_delegation_attr_enabled_},
    {"AllowContentInitiatedDataUrlNavigations", &is_allow_content_initiated_data_url_navigations_enabled_},
    {"AnimationWorklet", &is_animation_worklet_enabled_},
    {"AsyncClipboard", &is_async_clipboard_enabled_},
    {"AsyncCookies", &is_async_cookies_enabled_},
    {"AudioOutputDevices", &is_audio_output_devices_enabled_},
    {"AudioVideoTracks", &is_audio_video_tracks_enabled_},
    {"AudioWorklet", &is_audio_worklet_enabled_},
    {"AutomationControlled", &is_automation_controlled_enabled_},
    {"AutoplayIgnoresWebAudio", &is_autoplay_ignores_web_audio_enabled_},
    {"AutoplayMutedVideos", &is_autoplay_muted_videos_enabled_},
    {"BackgroundFetch", &is_background_fetch_enabled_},
    {"BackgroundVideoTrackOptimization", &is_background_video_track_optimization_enabled_},
    {"BlinkGenPropertyTrees", &is_blink_gen_property_trees_enabled_},
    {"BlinkRuntimeCallStats", &is_blink_runtime_call_stats_enabled_},
    {"BloatedRendererDetection", &is_bloated_renderer_detection_enabled_},
    {"BlockCredentialedSubresources", &is_block_credentialed_subresources_enabled_},
    {"BlockingDownloadsInSandbox", &is_blocking_downloads_in_sandbox_enabled_},
    {"BlockMetaSetCookie", &is_block_meta_set_cookie_enabled_},
    {"Budget", &is_budget_enabled_},
    {"BudgetQuery", &is_budget_query_enabled_},
    {"CacheInlineScriptCode", &is_cache_inline_script_code_enabled_},
    {"CacheStyleSheetWithMediaQueries", &is_cache_style_sheet_with_media_queries_enabled_},
    {"Canvas2dContextLostRestored", &is_canvas_2d_context_lost_restored_enabled_},
    {"Canvas2dFixedRenderingMode", &is_canvas_2d_fixed_rendering_mode_enabled_},
    {"Canvas2dImageChromium", &is_canvas_2d_image_chromium_enabled_},
    {"Canvas2dScrollPathIntoView", &is_canvas_2d_scroll_path_into_view_enabled_},
    {"CanvasColorManagement", &is_canvas_color_management_enabled_},
    {"CanvasHitRegion", &is_canvas_hit_region_enabled_},
    {"CanvasImageSmoothing", &is_canvas_image_smoothing_enabled_},
    {"ClickRetargetting", &is_click_retargetting_enabled_},
    {"ClientHintsPersistent", &is_client_hints_persistent_enabled_},
    {"ClientPlaceholdersForServerLoFi", &is_client_placeholders_for_server_lo_fi_enabled_},
    {"CompositedSelectionUpdate", &is_composited_selection_update_enabled_},
    {"CompositeOpaqueFixedPosition", &is_composite_opaque_fixed_position_enabled_},
    {"CompositeOpaqueScrollers", &is_composite_opaque_scrollers_enabled_},
    {"CompositorTouchAction", &is_compositor_touch_action_enabled_},
    {"ComputedAccessibilityInfo", &is_computed_accessibility_info_enabled_},
    {"ConicGradient", &is_conic_gradient_enabled_},
    {"ConstructableStylesheets", &is_constructable_stylesheets_enabled_},
    {"ContextMenu", &is_context_menu_enabled_},
    {"CorsRFC1918", &is_cors_rfc_1918_enabled_},
    {"CSS3Text", &is_css_3_text_enabled_},
    {"CSSAdditiveAnimations", &is_css_additive_animations_enabled_},
    {"CSSBackdropFilter", &is_css_backdrop_filter_enabled_},
    {"CSSDisplayContents", &is_css_display_contents_enabled_},
    {"CSSFocusVisible", &is_css_focus_visible_enabled_},
    {"CSSFontSizeAdjust", &is_css_font_size_adjust_enabled_},
    {"CSSHexAlphaColor", &is_css_hex_alpha_color_enabled_},
    {"CSSInBodyDoesNotBlockPaint", &is_css_in_body_does_not_block_paint_enabled_},
    {"CSSIndependentTransformProperties", &is_css_independent_transform_properties_enabled_},
    {"CSSLayoutAPI", &is_css_layout_api_enabled_},
    {"CSSMaskSourceType", &is_css_mask_source_type_enabled_},
    {"CSSMatches", &is_css_matches_enabled_},
    {"CSSOffsetPathRay", &is_css_offset_path_ray_enabled_},
    {"CSSOffsetPathRayContain", &is_css_offset_path_ray_contain_enabled_},
    {"CSSOffsetPositionAnchor", &is_css_offset_position_anchor_enabled_},
    {"CSSOMSmoothScroll", &is_cssom_smooth_scroll_enabled_},
    {"CSSOverscrollBehavior", &is_css_overscroll_behavior_enabled_},
    {"CSSPaintAPI", &is_css_paint_api_enabled_},
    {"CSSPaintAPIArguments", &is_css_paint_api_arguments_enabled_},
    {"CSSPartPseudoElement", &is_css_part_pseudo_element_enabled_},
    {"CSSPseudoIS", &is_css_pseudo_is_enabled_},
    {"CSSScrollSnapPoints", &is_css_scroll_snap_points_enabled_},
    {"CSSSnapSize", &is_css_snap_size_enabled_},
    {"CSSTransformBox", &is_css_transform_box_enabled_},
    {"CSSTypedOM", &is_css_typed_om_enabled_},
    {"CSSVariables2", &is_css_variables_2_enabled_},
    {"CSSViewport", &is_css_viewport_enabled_},
    {"CustomElementDefaultStyle", &is_custom_element_default_style_enabled_},
    {"CustomElementsBuiltin", &is_custom_elements_builtin_enabled_},
    {"CustomElementsV0", &is_custom_elements_v0_enabled_},
    {"CustomUserTiming", &is_custom_user_timing_enabled_},
    {"Database", &is_database_enabled_},
    {"DecodeToYUV", &is_decode_to_yuv_enabled_},
    {"DeprecationReporting", &is_deprecation_reporting_enabled_},
    {"DesktopCaptureDisableLocalEchoControl", &is_desktop_capture_disable_local_echo_control_enabled_},
    {"DeviceMemoryHeader", &is_device_memory_header_enabled_},
    {"DisableHardwareNoiseSuppression", &is_disable_hardware_noise_suppression_enabled_},
    {"DisablePaintChunksToCcLayer", &is_disable_paint_chunks_to_cc_layer_enabled_},
    {"DisableRasterInvalidation", &is_disable_raster_invalidation_enabled_},
    {"DisplayCutoutViewportFit", &is_display_cutout_viewport_fit_enabled_},
    {"DisplayNoneIFrameCreatesNoLayoutObject", &is_display_none_iframe_creates_no_layout_object_enabled_},
    {"DocumentCookie", &is_document_cookie_enabled_},
    {"DocumentDomain", &is_document_domain_enabled_},
    {"DocumentWrite", &is_document_write_enabled_},
    {"EmbedderCSPEnforcement", &is_embedder_csp_enforcement_enabled_},
    {"EncryptedMediaHdcpPolicyCheck", &is_encrypted_media_hdcp_policy_check_enabled_},
    {"EventTiming", &is_event_timing_enabled_},
    {"ExecCommandInJavaScript", &is_exec_command_in_java_script_enabled_},
    {"ExpensiveBackgroundTimerThrottling", &is_expensive_background_timer_throttling_enabled_},
    {"ExperimentalContentSecurityPolicyFeatures", &is_experimental_content_security_policy_features_enabled_},
    {"ExperimentalHardwareEchoCancellation", &is_experimental_hardware_echo_cancellation_enabled_},
    {"ExperimentalProductivityFeatures", &is_experimental_productivity_features_enabled_},
    {"ExperimentalV8Extras", &is_experimental_v8_extras_enabled_},
    {"ExtendedImageBitmapOptions", &is_extended_image_bitmap_options_enabled_},
    {"ExtendedTextMetrics", &is_extended_text_metrics_enabled_},
    {"ExtraWebGLVideoTextureMetadata", &is_extra_webgl_video_texture_metadata_enabled_},
    {"FastMobileScrolling", &is_fast_mobile_scrolling_enabled_},
    {"FeaturePolicyAutoplayFeature", &is_feature_policy_autoplay_feature_enabled_},
    {"FeaturePolicyExperimentalFeatures", &is_feature_policy_experimental_features_enabled_},
    {"FeaturePolicyForPermissions", &is_feature_policy_for_permissions_enabled_},
    {"FeaturePolicyJavaScriptInterface", &is_feature_policy_java_script_interface_enabled_},
    {"FeaturePolicyVibrateFeature", &is_feature_policy_vibrate_feature_enabled_},
    {"FetchRequestCache", &is_fetch_request_cache_enabled_},
    {"FetchRequestKeepalive", &is_fetch_request_keepalive_enabled_},
    {"FetchRequestSignal", &is_fetch_request_signal_enabled_},
    {"FileSystem", &is_file_system_enabled_},
    {"FocusOptions", &is_focus_options_enabled_},
    {"FontCacheScaling", &is_font_cache_scaling_enabled_},
    {"ForceOverlayFullscreenVideo", &is_force_overlay_fullscreen_video_enabled_},
    {"ForceTallerSelectPopup", &is_force_taller_select_popup_enabled_},
    {"FormDataEvent", &is_form_data_event_enabled_},
    {"FractionalMouseEvent", &is_fractional_mouse_event_enabled_},
    {"FractionalMouseTypePointerEvent", &is_fractional_mouse_type_pointer_event_enabled_},
    {"FractionalScrollOffsets", &is_fractional_scroll_offsets_enabled_},
    {"FramebustingNeedsSameOriginOrUserGesture", &is_framebusting_needs_same_origin_or_user_gesture_enabled_},
    {"FramesTimingFunction", &is_frames_timing_function_enabled_},
    {"FullscreenOptions", &is_fullscreen_options_enabled_},
    {"FullscreenUnprefixed", &is_fullscreen_unprefixed_enabled_},
    {"GamepadExtensions", &is_gamepad_extensions_enabled_},
    {"GamepadVibration", &is_gamepad_vibration_enabled_},
    {"HeapCompaction", &is_heap_compaction_enabled_},
    {"HeapIncrementalMarking", &is_heap_incremental_marking_enabled_},
    {"HeapIncrementalMarkingStress", &is_heap_incremental_marking_stress_enabled_},
    {"HTMLImports", &is_html_imports_enabled_},
    {"HTMLImportsStyleApplication", &is_html_imports_style_application_enabled_},
    {"IDBObserver", &is_idb_observer_enabled_},
    {"IdleTimeColdModeSpellChecking", &is_idle_time_cold_mode_spell_checking_enabled_},
    {"ImageDecodingAttribute", &is_image_decoding_attribute_enabled_},
    {"ImageOrientation", &is_image_orientation_enabled_},
    {"ImplicitRootScroller", &is_implicit_root_scroller_enabled_},
    {"IncrementalShadowDOM", &is_incremental_shadow_dom_enabled_},
    {"InertAttribute", &is_inert_attribute_enabled_},
    {"InputMultipleFieldsUI", &is_input_multiple_fields_ui_enabled_},
    {"InstalledApp", &is_installed_app_enabled_},
    {"IntersectionObserverGeometryMapper", &is_intersection_observer_geometry_mapper_enabled_},
    {"IntersectionObserverV2", &is_intersection_observer_v_2_enabled_},
    {"JSImageDecode", &is_js_image_decode_enabled_},
    {"KeyboardLock", &is_keyboard_lock_enabled_},
    {"KeyboardMap", &is_keyboard_map_enabled_},
    {"LangAttributeAwareFormControlUI", &is_lang_attribute_aware_form_control_ui_enabled_},
    {"LayeredAPI", &is_layered_api_enabled_},
    {"LayoutNG", &is_layout_ng_enabled_},
    {"LayoutNGBlockFragmentation", &is_layout_ng_block_fragmentation_enabled_},
    {"LayoutNGFlexBox", &is_layout_ng_flex_box_enabled_},
    {"LayoutNGFragmentCaching", &is_layout_ng_fragment_caching_enabled_},
    {"LazyFrameLoading", &is_lazy_frame_loading_enabled_},
    {"LazyInitializeMediaControls", &is_lazy_initialize_media_controls_enabled_},
    {"LazyParseCSS", &is_lazy_parse_css_enabled_},
    {"LoadingWithMojo", &is_loading_with_mojo_enabled_},
    {"LongTaskObserver", &is_long_task_observer_enabled_},
    {"LongTaskV2", &is_long_task_v_2_enabled_},
    {"LowLatencyCanvas", &is_low_latency_canvas_enabled_},
    {"MediaCapabilities", &is_media_capabilities_enabled_},
    {"MediaCapabilitiesEncodingInfo", &is_media_capabilities_encoding_info_enabled_},
    {"MediaCapture", &is_media_capture_enabled_},
    {"MediaCaptureDepth", &is_media_capture_depth_enabled_},
    {"MediaCaptureDepthVideoKind", &is_media_capture_depth_video_kind_enabled_},
    {"MediaCaptureFromVideo", &is_media_capture_from_video_enabled_},
    {"MediaCastOverlayButton", &is_media_cast_overlay_button_enabled_},
    {"MediaControlsOverlayPlayButton", &is_media_controls_overlay_play_button_enabled_},
    {"MediaDocumentDownloadButton", &is_media_document_download_button_enabled_},
    {"MediaEngagementBypassAutoplayPolicies", &is_media_engagement_bypass_autoplay_policies_enabled_},
    {"MediaQueryShape", &is_media_query_shape_enabled_},
    {"MediaSession", &is_media_session_enabled_},
    {"MediaSourceExperimental", &is_media_source_experimental_enabled_},
    {"MediaSourceNewAbortAndDuration", &is_media_source_new_abort_and_duration_enabled_},
    {"MediaStreamTrackContentHint", &is_media_stream_track_content_hint_enabled_},
    {"MiddleClickAutoscroll", &is_middle_click_autoscroll_enabled_},
    {"MobileLayoutTheme", &is_mobile_layout_theme_enabled_},
    {"ModernMediaControls", &is_modern_media_controls_enabled_},
    {"ModuleDedicatedWorker", &is_module_dedicated_worker_enabled_},
    {"ModulePreload", &is_module_preload_enabled_},
    {"ModuleScriptsDynamicImport", &is_module_scripts_dynamic_import_enabled_},
    {"ModuleScriptsImportMetaUrl", &is_module_scripts_import_meta_url_enabled_},
    {"MojoBlobURLs", &is_mojo_blob_ur_ls_enabled_},
    {"MojoJS", &is_mojo_js_enabled_},
    {"MojoJSTest", &is_mojo_js_test_enabled_},
    {"MultipleColorStopPositions", &is_multiple_color_stop_positions_enabled_},
    {"NavigatorContentUtils", &is_navigator_content_utils_enabled_},
    {"NavigatorDeviceMemory", &is_navigator_device_memory_enabled_},
    {"NetInfoDownlink", &is_net_info_downlink_enabled_},
    {"NetInfoDownlinkHeader", &is_net_info_downlink_header_enabled_},
    {"NetInfoDownlinkMax", &is_net_info_downlink_max_enabled_},
    {"NetInfoEffectiveType", &is_net_info_effective_type_enabled_},
    {"NetInfoEffectiveTypeHeader", &is_net_info_effective_type_header_enabled_},
    {"NetInfoRtt", &is_net_info_rtt_enabled_},
    {"NetInfoRttHeader", &is_net_info_rtt_header_enabled_},
    {"NetInfoSaveData", &is_net_info_save_data_enabled_},
    {"NetworkService", &is_network_service_enabled_},
    {"NewRemotePlaybackPipeline", &is_new_remote_playback_pipeline_enabled_},
    {"NotificationConstructor", &is_notification_constructor_enabled_},
    {"NotificationContentImage", &is_notification_content_image_enabled_},
    {"NotificationInlineReplies", &is_notification_inline_replies_enabled_},
    {"Notifications", &is_notifications_enabled_},
    {"NullableDocumentDomain", &is_nullable_document_domain_enabled_},
    {"OffMainThreadWebSocket", &is_off_main_thread_websocket_enabled_},
    {"OffscreenCanvas", &is_offscreen_canvas_enabled_},
    {"OffscreenCanvasText", &is_offscreen_canvas_text_enabled_},
    {"OnDeviceChange", &is_on_device_change_enabled_},
    {"OrientationEvent", &is_orientation_event_enabled_},
    {"OriginManifest", &is_origin_manifest_enabled_},
    {"OriginTrials", &is_origin_trials_enabled_},
    {"OriginTrialsSampleAPI", &is_origin_trials_sample_api_enabled_},
    {"OriginTrialsSampleAPIImplied", &is_origin_trials_sample_api_implied_enabled_},
    {"OutOfBlinkCORS", &is_out_of_blink_cors_enabled_},
    {"OverflowIconsForMediaControls", &is_overflow_icons_for_media_controls_enabled_},
    {"OverlayScrollbars", &is_overlay_scrollbars_enabled_},
    {"PageLifecycle", &is_page_lifecycle_enabled_},
    {"PagePopup", &is_page_popup_enabled_},
    {"PaintUnderInvalidationChecking", &is_paint_under_invalidation_checking_enabled_},
    {"PartialRasterInvalidation", &is_partial_raster_invalidation_enabled_},
    {"PassiveDocumentEventListeners", &is_passive_document_event_listeners_enabled_},
    {"PassPaintVisualRectToCompositor", &is_pass_paint_visual_rect_to_compositor_enabled_},
    {"PaymentApp", &is_payment_app_enabled_},
    {"PaymentDetailsModifierData", &is_payment_details_modifier_data_enabled_},
    {"PaymentRequest", &is_payment_request_enabled_},
    {"PaymentRequestBasicCard", &is_payment_request_basic_card_enabled_},
    {"PerformanceNavigationTiming2", &is_performance_navigation_timing_2_enabled_},
    {"PerformancePaintTiming", &is_performance_paint_timing_enabled_},
    {"PermissionDelegation", &is_permission_delegation_enabled_},
    {"Permissions", &is_permissions_enabled_},
    {"PermissionsRequestRevoke", &is_permissions_request_revoke_enabled_},
    {"PictureInPicture", &is_picture_in_picture_enabled_},
    {"PictureInPictureAPI", &is_picture_in_picture_api_enabled_},
    {"PreciseMemoryInfo", &is_precise_memory_info_enabled_},
    {"PreferredImageRasterBounds", &is_preferred_image_raster_bounds_enabled_},
    {"PrefixedVideoFullscreen", &is_prefixed_video_fullscreen_enabled_},
    {"PreloadDefaultIsMetadata", &is_preload_default_is_metadata_enabled_},
    {"PreloadImageSrcSet", &is_preload_image_src_set_enabled_},
    {"Presentation", &is_presentation_enabled_},
    {"PrintBrowser", &is_print_browser_enabled_},
    {"PriorityHints", &is_priority_hints_enabled_},
    {"PushMessaging", &is_push_messaging_enabled_},
    {"PWAFullCodeCache", &is_pwa_full_code_cache_enabled_},
    {"RasterInducingScroll", &is_raster_inducing_scroll_enabled_},
    {"ReducedReferrerGranularity", &is_reduced_referrer_granularity_enabled_},
    {"RemotePlayback", &is_remote_playback_enabled_},
    {"RemotePlaybackBackend", &is_remote_playback_backend_enabled_},
    {"RenderingPipelineThrottling", &is_rendering_pipeline_throttling_enabled_},
    {"RenderingPipelineThrottlingLoadingIframes", &is_rendering_pipeline_throttling_loading_iframes_enabled_},
    {"RenderUnicodeControlCharacters", &is_render_unicode_control_characters_enabled_},
    {"ReportingObserver", &is_reporting_observer_enabled_},
    {"RequireCSSExtensionForFile", &is_require_css_extension_for_file_enabled_},
    {"ResizeObserver", &is_resize_observer_enabled_},
    {"ResourceLoadScheduler", &is_resource_load_scheduler_enabled_},
    {"RestrictAppCacheToSecureContexts", &is_restrict_app_cache_to_secure_contexts_enabled_},
    {"RestrictCanRequestURLCharacterSet", &is_restrict_can_request_url_character_set_enabled_},
    {"RootLayerScrolling", &is_root_layer_scrolling_enabled_},
    {"RtcPeerConnectionId", &is_rtc_peer_connection_id_enabled_},
    {"RTCRtpSenderParameters", &is_rtc_rtp_sender_parameters_enabled_},
    {"RTCUnifiedPlan", &is_rtc_unified_plan_enabled_},
    {"RTCUnifiedPlanByDefault", &is_rtc_unified_plan_by_default_enabled_},
    {"ScriptedSpeech", &is_scripted_speech_enabled_},
    {"ScrollAnchorSerialization", &is_scroll_anchor_serialization_enabled_},
    {"ScrollCustomization", &is_scroll_customization_enabled_},
    {"ScrollTopLeftInterop", &is_scroll_top_left_interop_enabled_},
    {"SecMetadata", &is_sec_metadata_enabled_},
    {"SendBeaconThrowForBlobWithNonSimpleType", &is_send_beacon_throw_for_blob_with_non_simple_type_enabled_},
    {"SendMouseEventsDisabledFormControls", &is_send_mouse_events_disabled_form_controls_enabled_},
    {"Sensor", &is_sensor_enabled_},
    {"SensorExtraClasses", &is_sensor_extra_classes_enabled_},
    {"ServerTiming", &is_server_timing_enabled_},
    {"ServiceWorkerScriptFullCodeCache", &is_service_worker_script_full_code_cache_enabled_},
    {"ServiceWorkerUpdateViaCache", &is_service_worker_update_via_cache_enabled_},
    {"SetRootScroller", &is_set_root_scroller_enabled_},
    {"ShadowDOMV0", &is_shadow_dom_v0_enabled_},
    {"ShadowPiercingDescendantCombinator", &is_shadow_piercing_descendant_combinator_enabled_},
    {"ShapeDetection", &is_shape_detection_enabled_},
    {"SharedArrayBuffer", &is_shared_array_buffer_enabled_},
    {"SharedWorker", &is_shared_worker_enabled_},
    {"SignatureBasedIntegrity", &is_signature_based_integrity_enabled_},
    {"SlimmingPaintV175", &is_slimming_paint_v_175_enabled_},
    {"SlimmingPaintV2", &is_slimming_paint_v_2_enabled_},
    {"SlotInFlatTree", &is_slot_in_flat_tree_enabled_},
    {"SMIL", &is_smil_enabled_},
    {"SmoothScrollJSIntervention", &is_smooth_scroll_js_intervention_enabled_},
    {"StableBlinkFeatures", &is_stable_blink_features_enabled_},
    {"StackedCSSPropertyAnimations", &is_stacked_css_property_animations_enabled_},
    {"StopInBackground", &is_stop_in_background_enabled_},
    {"StopLoadingInBackground", &is_stop_loading_in_background_enabled_},
    {"StopNonTimersInBackground", &is_stop_non_timers_in_background_enabled_},
    {"TimerThrottlingForBackgroundTabs", &is_timer_throttling_for_background_tabs_enabled_},
    {"TimerThrottlingForHiddenFrames", &is_timer_throttling_for_hidden_frames_enabled_},
    {"TouchEventFeatureDetection", &is_touch_event_feature_detection_enabled_},
    {"TouchpadAndWheelScrollLatching", &is_touchpad_and_wheel_scroll_latching_enabled_},
    {"TrackLayoutPassesPerBlock", &is_track_layout_passes_per_block_enabled_},
    {"TrustedDOMTypes", &is_trusted_dom_types_enabled_},
    {"TrustedEventsDefaultAction", &is_trusted_events_default_action_enabled_},
    {"UnclosedFormControlIsInvalid", &is_unclosed_form_control_is_invalid_enabled_},
    {"UnifiedTouchAdjustment", &is_unified_touch_adjustment_enabled_},
    {"UserActivationV2", &is_user_activation_v_2_enabled_},
    {"V8ContextSnapshot", &is_v8_context_snapshot_enabled_},
    {"V8IdleTasks", &is_v8_idle_tasks_enabled_},
    {"VideoFullscreenDetection", &is_video_fullscreen_detection_enabled_},
    {"VideoFullscreenOrientationLock", &is_video_fullscreen_orientation_lock_enabled_},
    {"VideoRotateToFullscreen", &is_video_rotate_to_fullscreen_enabled_},
    {"VisibilityCollapseColumn", &is_visibility_collapse_column_enabled_},
    {"VisibilityCollapseRow", &is_visibility_collapse_row_enabled_},
    {"VisualViewportAPI", &is_visual_viewport_api_enabled_},
    {"WakeLock", &is_wake_lock_enabled_},
    {"WebAnimationsAPI", &is_web_animations_api_enabled_},
    {"WebAnimationsSVG", &is_web_animations_svg_enabled_},
    {"WebAssemblyStreaming", &is_web_assembly_streaming_enabled_},
    {"WebAuth", &is_web_auth_enabled_},
    {"WebBluetooth", &is_web_bluetooth_enabled_},
    {"WebFontsCacheAwareTimeoutAdaptation", &is_web_fonts_cache_aware_timeout_adaptation_enabled_},
    {"WebGLDraftExtensions", &is_webgl_draft_extensions_enabled_},
    {"WebGLImageChromium", &is_webgl_image_chromium_enabled_},
    {"WebLocksAPI", &is_web_locks_api_enabled_},
    {"WebNFC", &is_web_nfc_enabled_},
    {"WebRtcVaapiHWVP8Encoding", &is_web_rtc_vaapi_hwvp_8_encoding_enabled_},
    {"WebShare", &is_web_share_enabled_},
    {"WebUSB", &is_web_usb_enabled_},
    {"WebUSBOnDedicatedAndSharedWorkers", &is_web_usb_on_dedicated_and_shared_workers_enabled_},
    {"WebVR", &is_web_vr_enabled_},
    {"WebVTTRegions", &is_web_vtt_regions_enabled_},
    {"WebXR", &is_web_xr_enabled_},
    {"WebXRGamepadSupport", &is_web_xr_gamepad_support_enabled_},
    {"WebXRHitTest", &is_web_xr_hit_test_enabled_},
    {"WorkerNosniffBlock", &is_worker_nosniff_block_enabled_},
    {"WorkerNosniffWarn", &is_worker_nosniff_warn_enabled_},
    {"Worklet", &is_worklet_enabled_},
    {"WorkStealingInScriptRunner", &is_work_stealing_in_script_runner_enabled_},
    {"XSLT", &is_xslt_enabled_},
  };
  for (const auto& feature : kFeatures) {
    if (name == feature.name) {
      *feature.setting = enable;
      return;
    }
  }
  DLOG(ERROR) << "RuntimeEnabledFeature not recognized: " << name;
}

bool RuntimeEnabledFeatures::is_accelerated_2d_canvas_enabled_ = true;
bool RuntimeEnabledFeatures::is_accessibility_object_model_enabled_ = false;
bool RuntimeEnabledFeatures::is_allow_activation_delegation_attr_enabled_ = false;
bool RuntimeEnabledFeatures::is_allow_content_initiated_data_url_navigations_enabled_ = true;
bool RuntimeEnabledFeatures::is_animation_worklet_enabled_ = false;
bool RuntimeEnabledFeatures::is_async_clipboard_enabled_ = false;
bool RuntimeEnabledFeatures::is_async_cookies_enabled_ = false;
bool RuntimeEnabledFeatures::is_audio_output_devices_enabled_ = true;
bool RuntimeEnabledFeatures::is_audio_video_tracks_enabled_ = false;
bool RuntimeEnabledFeatures::is_audio_worklet_enabled_ = true;
bool RuntimeEnabledFeatures::is_automation_controlled_enabled_ = false;
bool RuntimeEnabledFeatures::is_autoplay_ignores_web_audio_enabled_ = false;
bool RuntimeEnabledFeatures::is_autoplay_muted_videos_enabled_ = false;
bool RuntimeEnabledFeatures::is_background_fetch_enabled_ = false;
bool RuntimeEnabledFeatures::is_background_video_track_optimization_enabled_ = true;
bool RuntimeEnabledFeatures::is_blink_gen_property_trees_enabled_ = false;
bool RuntimeEnabledFeatures::is_blink_runtime_call_stats_enabled_ = false;
bool RuntimeEnabledFeatures::is_bloated_renderer_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_block_credentialed_subresources_enabled_ = true;
bool RuntimeEnabledFeatures::is_blocking_downloads_in_sandbox_enabled_ = false;
bool RuntimeEnabledFeatures::is_block_meta_set_cookie_enabled_ = true;
bool RuntimeEnabledFeatures::is_budget_enabled_ = true;
bool RuntimeEnabledFeatures::is_budget_query_enabled_ = false;
bool RuntimeEnabledFeatures::is_cache_inline_script_code_enabled_ = false;
bool RuntimeEnabledFeatures::is_cache_style_sheet_with_media_queries_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_context_lost_restored_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_fixed_rendering_mode_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_image_chromium_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_scroll_path_into_view_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_color_management_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_hit_region_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_image_smoothing_enabled_ = false;
bool RuntimeEnabledFeatures::is_click_retargetting_enabled_ = false;
bool RuntimeEnabledFeatures::is_client_hints_persistent_enabled_ = true;
bool RuntimeEnabledFeatures::is_client_placeholders_for_server_lo_fi_enabled_ = false;
bool RuntimeEnabledFeatures::is_composited_selection_update_enabled_ = false;
bool RuntimeEnabledFeatures::is_composite_opaque_fixed_position_enabled_ = false;
bool RuntimeEnabledFeatures::is_composite_opaque_scrollers_enabled_ = true;
bool RuntimeEnabledFeatures::is_compositor_touch_action_enabled_ = false;
bool RuntimeEnabledFeatures::is_computed_accessibility_info_enabled_ = false;
bool RuntimeEnabledFeatures::is_conic_gradient_enabled_ = false;
bool RuntimeEnabledFeatures::is_constructable_stylesheets_enabled_ = false;
bool RuntimeEnabledFeatures::is_context_menu_enabled_ = false;
bool RuntimeEnabledFeatures::is_cors_rfc_1918_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_3_text_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_additive_animations_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_backdrop_filter_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_display_contents_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_focus_visible_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_font_size_adjust_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_hex_alpha_color_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_in_body_does_not_block_paint_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_independent_transform_properties_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_layout_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_mask_source_type_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_matches_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_offset_path_ray_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_offset_path_ray_contain_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_offset_position_anchor_enabled_ = false;
bool RuntimeEnabledFeatures::is_cssom_smooth_scroll_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_overscroll_behavior_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_paint_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_paint_api_arguments_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_part_pseudo_element_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_pseudo_is_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_scroll_snap_points_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_snap_size_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_transform_box_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_typed_om_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_variables_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_viewport_enabled_ = false;
bool RuntimeEnabledFeatures::is_custom_element_default_style_enabled_ = false;
bool RuntimeEnabledFeatures::is_custom_elements_builtin_enabled_ = true;
bool RuntimeEnabledFeatures::is_custom_elements_v0_enabled_ = true;
bool RuntimeEnabledFeatures::is_custom_user_timing_enabled_ = false;
bool RuntimeEnabledFeatures::is_database_enabled_ = true;
bool RuntimeEnabledFeatures::is_decode_to_yuv_enabled_ = false;
bool RuntimeEnabledFeatures::is_deprecation_reporting_enabled_ = false;
bool RuntimeEnabledFeatures::is_desktop_capture_disable_local_echo_control_enabled_ = false;
bool RuntimeEnabledFeatures::is_device_memory_header_enabled_ = true;
bool RuntimeEnabledFeatures::is_disable_hardware_noise_suppression_enabled_ = false;
bool RuntimeEnabledFeatures::is_disable_paint_chunks_to_cc_layer_enabled_ = false;
bool RuntimeEnabledFeatures::is_disable_raster_invalidation_enabled_ = false;
bool RuntimeEnabledFeatures::is_display_cutout_viewport_fit_enabled_ = false;
bool RuntimeEnabledFeatures::is_display_none_iframe_creates_no_layout_object_enabled_ = true;
bool RuntimeEnabledFeatures::is_document_cookie_enabled_ = false;
bool RuntimeEnabledFeatures::is_document_domain_enabled_ = false;
bool RuntimeEnabledFeatures::is_document_write_enabled_ = false;
bool RuntimeEnabledFeatures::is_embedder_csp_enforcement_enabled_ = true;
bool RuntimeEnabledFeatures::is_encrypted_media_hdcp_policy_check_enabled_ = false;
bool RuntimeEnabledFeatures::is_event_timing_enabled_ = false;
bool RuntimeEnabledFeatures::is_exec_command_in_java_script_enabled_ = false;
bool RuntimeEnabledFeatures::is_expensive_background_timer_throttling_enabled_ = true;
bool RuntimeEnabledFeatures::is_experimental_content_security_policy_features_enabled_ = false;
bool RuntimeEnabledFeatures::is_experimental_hardware_echo_cancellation_enabled_ = false;
bool RuntimeEnabledFeatures::is_experimental_productivity_features_enabled_ = false;
bool RuntimeEnabledFeatures::is_experimental_v8_extras_enabled_ = false;
bool RuntimeEnabledFeatures::is_extended_image_bitmap_options_enabled_ = false;
bool RuntimeEnabledFeatures::is_extended_text_metrics_enabled_ = false;
bool RuntimeEnabledFeatures::is_extra_webgl_video_texture_metadata_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_mobile_scrolling_enabled_ = false;
bool RuntimeEnabledFeatures::is_feature_policy_autoplay_feature_enabled_ = true;
bool RuntimeEnabledFeatures::is_feature_policy_experimental_features_enabled_ = false;
bool RuntimeEnabledFeatures::is_feature_policy_for_permissions_enabled_ = true;
bool RuntimeEnabledFeatures::is_feature_policy_java_script_interface_enabled_ = false;
bool RuntimeEnabledFeatures::is_feature_policy_vibrate_feature_enabled_ = false;
bool RuntimeEnabledFeatures::is_fetch_request_cache_enabled_ = true;
bool RuntimeEnabledFeatures::is_fetch_request_keepalive_enabled_ = true;
bool RuntimeEnabledFeatures::is_fetch_request_signal_enabled_ = true;
bool RuntimeEnabledFeatures::is_file_system_enabled_ = true;
bool RuntimeEnabledFeatures::is_focus_options_enabled_ = true;
bool RuntimeEnabledFeatures::is_font_cache_scaling_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_overlay_fullscreen_video_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_taller_select_popup_enabled_ = false;
bool RuntimeEnabledFeatures::is_form_data_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_fractional_mouse_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_fractional_mouse_type_pointer_event_enabled_ = true;
bool RuntimeEnabledFeatures::is_fractional_scroll_offsets_enabled_ = false;
bool RuntimeEnabledFeatures::is_framebusting_needs_same_origin_or_user_gesture_enabled_ = true;
bool RuntimeEnabledFeatures::is_frames_timing_function_enabled_ = false;
bool RuntimeEnabledFeatures::is_fullscreen_options_enabled_ = false;
bool RuntimeEnabledFeatures::is_fullscreen_unprefixed_enabled_ = false;
bool RuntimeEnabledFeatures::is_gamepad_extensions_enabled_ = false;
bool RuntimeEnabledFeatures::is_gamepad_vibration_enabled_ = false;
bool RuntimeEnabledFeatures::is_heap_compaction_enabled_ = true;
bool RuntimeEnabledFeatures::is_heap_incremental_marking_enabled_ = false;
bool RuntimeEnabledFeatures::is_heap_incremental_marking_stress_enabled_ = false;
bool RuntimeEnabledFeatures::is_html_imports_enabled_ = true;
bool RuntimeEnabledFeatures::is_html_imports_style_application_enabled_ = true;
bool RuntimeEnabledFeatures::is_idb_observer_enabled_ = false;
bool RuntimeEnabledFeatures::is_idle_time_cold_mode_spell_checking_enabled_ = true;
bool RuntimeEnabledFeatures::is_image_decoding_attribute_enabled_ = true;
bool RuntimeEnabledFeatures::is_image_orientation_enabled_ = false;
bool RuntimeEnabledFeatures::is_implicit_root_scroller_enabled_ = false;
bool RuntimeEnabledFeatures::is_incremental_shadow_dom_enabled_ = false;
bool RuntimeEnabledFeatures::is_inert_attribute_enabled_ = false;
bool RuntimeEnabledFeatures::is_input_multiple_fields_ui_enabled_ = true;
bool RuntimeEnabledFeatures::is_installed_app_enabled_ = false;
bool RuntimeEnabledFeatures::is_intersection_observer_geometry_mapper_enabled_ = false;
bool RuntimeEnabledFeatures::is_intersection_observer_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_js_image_decode_enabled_ = true;
bool RuntimeEnabledFeatures::is_keyboard_lock_enabled_ = true;
bool RuntimeEnabledFeatures::is_keyboard_map_enabled_ = false;
bool RuntimeEnabledFeatures::is_lang_attribute_aware_form_control_ui_enabled_ = false;
bool RuntimeEnabledFeatures::is_layered_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_block_fragmentation_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_flex_box_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_fragment_caching_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_frame_loading_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_initialize_media_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_parse_css_enabled_ = false;
bool RuntimeEnabledFeatures::is_loading_with_mojo_enabled_ = true;
bool RuntimeEnabledFeatures::is_long_task_observer_enabled_ = true;
bool RuntimeEnabledFeatures::is_long_task_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_low_latency_canvas_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capabilities_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_capabilities_encoding_info_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capture_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capture_depth_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capture_depth_video_kind_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capture_from_video_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_cast_overlay_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_controls_overlay_play_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_document_download_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_engagement_bypass_autoplay_policies_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_query_shape_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_session_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_source_experimental_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_source_new_abort_and_duration_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_stream_track_content_hint_enabled_ = false;
bool RuntimeEnabledFeatures::is_middle_click_autoscroll_enabled_ = false;
bool RuntimeEnabledFeatures::is_mobile_layout_theme_enabled_ = false;
bool RuntimeEnabledFeatures::is_modern_media_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_module_dedicated_worker_enabled_ = false;
bool RuntimeEnabledFeatures::is_module_preload_enabled_ = true;
bool RuntimeEnabledFeatures::is_module_scripts_dynamic_import_enabled_ = false;
bool RuntimeEnabledFeatures::is_module_scripts_import_meta_url_enabled_ = false;
bool RuntimeEnabledFeatures::is_mojo_blob_ur_ls_enabled_ = false;
bool RuntimeEnabledFeatures::is_mojo_js_enabled_ = false;
bool RuntimeEnabledFeatures::is_mojo_js_test_enabled_ = false;
bool RuntimeEnabledFeatures::is_multiple_color_stop_positions_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_content_utils_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_device_memory_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_downlink_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_downlink_header_enabled_ = false;
bool RuntimeEnabledFeatures::is_net_info_downlink_max_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_effective_type_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_effective_type_header_enabled_ = false;
bool RuntimeEnabledFeatures::is_net_info_rtt_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_rtt_header_enabled_ = false;
bool RuntimeEnabledFeatures::is_net_info_save_data_enabled_ = true;
bool RuntimeEnabledFeatures::is_network_service_enabled_ = false;
bool RuntimeEnabledFeatures::is_new_remote_playback_pipeline_enabled_ = false;
bool RuntimeEnabledFeatures::is_notification_constructor_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_content_image_enabled_ = false;
bool RuntimeEnabledFeatures::is_notification_inline_replies_enabled_ = false;
bool RuntimeEnabledFeatures::is_notifications_enabled_ = true;
bool RuntimeEnabledFeatures::is_nullable_document_domain_enabled_ = false;
bool RuntimeEnabledFeatures::is_off_main_thread_websocket_enabled_ = false;
bool RuntimeEnabledFeatures::is_offscreen_canvas_enabled_ = false;
bool RuntimeEnabledFeatures::is_offscreen_canvas_text_enabled_ = false;
bool RuntimeEnabledFeatures::is_on_device_change_enabled_ = true;
bool RuntimeEnabledFeatures::is_orientation_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_manifest_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_trials_enabled_ = true;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_implied_enabled_ = false;
bool RuntimeEnabledFeatures::is_out_of_blink_cors_enabled_ = false;
bool RuntimeEnabledFeatures::is_overflow_icons_for_media_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_overlay_scrollbars_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_lifecycle_enabled_ = true;
bool RuntimeEnabledFeatures::is_page_popup_enabled_ = true;
bool RuntimeEnabledFeatures::is_paint_under_invalidation_checking_enabled_ = false;
bool RuntimeEnabledFeatures::is_partial_raster_invalidation_enabled_ = false;
bool RuntimeEnabledFeatures::is_passive_document_event_listeners_enabled_ = true;
bool RuntimeEnabledFeatures::is_pass_paint_visual_rect_to_compositor_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_app_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_details_modifier_data_enabled_ = true;
bool RuntimeEnabledFeatures::is_payment_request_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_request_basic_card_enabled_ = true;
bool RuntimeEnabledFeatures::is_performance_navigation_timing_2_enabled_ = true;
bool RuntimeEnabledFeatures::is_performance_paint_timing_enabled_ = true;
bool RuntimeEnabledFeatures::is_permission_delegation_enabled_ = false;
bool RuntimeEnabledFeatures::is_permissions_enabled_ = true;
bool RuntimeEnabledFeatures::is_permissions_request_revoke_enabled_ = false;
bool RuntimeEnabledFeatures::is_picture_in_picture_enabled_ = false;
bool RuntimeEnabledFeatures::is_picture_in_picture_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_precise_memory_info_enabled_ = false;
bool RuntimeEnabledFeatures::is_preferred_image_raster_bounds_enabled_ = false;
bool RuntimeEnabledFeatures::is_prefixed_video_fullscreen_enabled_ = true;
bool RuntimeEnabledFeatures::is_preload_default_is_metadata_enabled_ = true;
bool RuntimeEnabledFeatures::is_preload_image_src_set_enabled_ = false;
bool RuntimeEnabledFeatures::is_presentation_enabled_ = true;
bool RuntimeEnabledFeatures::is_print_browser_enabled_ = false;
bool RuntimeEnabledFeatures::is_priority_hints_enabled_ = false;
bool RuntimeEnabledFeatures::is_push_messaging_enabled_ = true;
bool RuntimeEnabledFeatures::is_pwa_full_code_cache_enabled_ = false;
bool RuntimeEnabledFeatures::is_raster_inducing_scroll_enabled_ = false;
bool RuntimeEnabledFeatures::is_reduced_referrer_granularity_enabled_ = false;
bool RuntimeEnabledFeatures::is_remote_playback_enabled_ = true;
bool RuntimeEnabledFeatures::is_remote_playback_backend_enabled_ = false;
bool RuntimeEnabledFeatures::is_rendering_pipeline_throttling_enabled_ = true;
bool RuntimeEnabledFeatures::is_rendering_pipeline_throttling_loading_iframes_enabled_ = true;
bool RuntimeEnabledFeatures::is_render_unicode_control_characters_enabled_ = true;
bool RuntimeEnabledFeatures::is_reporting_observer_enabled_ = false;
bool RuntimeEnabledFeatures::is_require_css_extension_for_file_enabled_ = true;
bool RuntimeEnabledFeatures::is_resize_observer_enabled_ = true;
bool RuntimeEnabledFeatures::is_resource_load_scheduler_enabled_ = false;
bool RuntimeEnabledFeatures::is_restrict_app_cache_to_secure_contexts_enabled_ = false;
bool RuntimeEnabledFeatures::is_restrict_can_request_url_character_set_enabled_ = true;
bool RuntimeEnabledFeatures::is_root_layer_scrolling_enabled_ = true;
bool RuntimeEnabledFeatures::is_rtc_peer_connection_id_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_rtp_sender_parameters_enabled_ = true;
bool RuntimeEnabledFeatures::is_rtc_unified_plan_enabled_ = true;
bool RuntimeEnabledFeatures::is_rtc_unified_plan_by_default_enabled_ = false;
bool RuntimeEnabledFeatures::is_scripted_speech_enabled_ = true;
bool RuntimeEnabledFeatures::is_scroll_anchor_serialization_enabled_ = false;
bool RuntimeEnabledFeatures::is_scroll_customization_enabled_ = false;
bool RuntimeEnabledFeatures::is_scroll_top_left_interop_enabled_ = true;
bool RuntimeEnabledFeatures::is_sec_metadata_enabled_ = false;
bool RuntimeEnabledFeatures::is_send_beacon_throw_for_blob_with_non_simple_type_enabled_ = true;
bool RuntimeEnabledFeatures::is_send_mouse_events_disabled_form_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_sensor_enabled_ = false;
bool RuntimeEnabledFeatures::is_sensor_extra_classes_enabled_ = false;
bool RuntimeEnabledFeatures::is_server_timing_enabled_ = true;
bool RuntimeEnabledFeatures::is_service_worker_script_full_code_cache_enabled_ = false;
bool RuntimeEnabledFeatures::is_service_worker_update_via_cache_enabled_ = true;
bool RuntimeEnabledFeatures::is_set_root_scroller_enabled_ = false;
bool RuntimeEnabledFeatures::is_shadow_dom_v0_enabled_ = true;
bool RuntimeEnabledFeatures::is_shadow_piercing_descendant_combinator_enabled_ = false;
bool RuntimeEnabledFeatures::is_shape_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_array_buffer_enabled_ = true;
bool RuntimeEnabledFeatures::is_shared_worker_enabled_ = true;
bool RuntimeEnabledFeatures::is_signature_based_integrity_enabled_ = false;
bool RuntimeEnabledFeatures::is_slimming_paint_v_175_enabled_ = true;
bool RuntimeEnabledFeatures::is_slimming_paint_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_slot_in_flat_tree_enabled_ = true;
bool RuntimeEnabledFeatures::is_smil_enabled_ = true;
bool RuntimeEnabledFeatures::is_smooth_scroll_js_intervention_enabled_ = true;
bool RuntimeEnabledFeatures::is_stable_blink_features_enabled_ = true;
bool RuntimeEnabledFeatures::is_stacked_css_property_animations_enabled_ = false;
bool RuntimeEnabledFeatures::is_stop_in_background_enabled_ = false;
bool RuntimeEnabledFeatures::is_stop_loading_in_background_enabled_ = false;
bool RuntimeEnabledFeatures::is_stop_non_timers_in_background_enabled_ = false;
bool RuntimeEnabledFeatures::is_timer_throttling_for_background_tabs_enabled_ = true;
bool RuntimeEnabledFeatures::is_timer_throttling_for_hidden_frames_enabled_ = true;
bool RuntimeEnabledFeatures::is_touch_event_feature_detection_enabled_ = true;
bool RuntimeEnabledFeatures::is_touchpad_and_wheel_scroll_latching_enabled_ = false;
bool RuntimeEnabledFeatures::is_track_layout_passes_per_block_enabled_ = false;
bool RuntimeEnabledFeatures::is_trusted_dom_types_enabled_ = false;
bool RuntimeEnabledFeatures::is_trusted_events_default_action_enabled_ = true;
bool RuntimeEnabledFeatures::is_unclosed_form_control_is_invalid_enabled_ = false;
bool RuntimeEnabledFeatures::is_unified_touch_adjustment_enabled_ = true;
bool RuntimeEnabledFeatures::is_user_activation_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_v8_context_snapshot_enabled_ = false;
bool RuntimeEnabledFeatures::is_v8_idle_tasks_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_fullscreen_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_fullscreen_orientation_lock_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_rotate_to_fullscreen_enabled_ = false;
bool RuntimeEnabledFeatures::is_visibility_collapse_column_enabled_ = false;
bool RuntimeEnabledFeatures::is_visibility_collapse_row_enabled_ = true;
bool RuntimeEnabledFeatures::is_visual_viewport_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_wake_lock_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_animations_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_animations_svg_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_assembly_streaming_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_auth_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_bluetooth_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_fonts_cache_aware_timeout_adaptation_enabled_ = false;
bool RuntimeEnabledFeatures::is_webgl_draft_extensions_enabled_ = false;
bool RuntimeEnabledFeatures::is_webgl_image_chromium_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_locks_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_nfc_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_rtc_vaapi_hwvp_8_encoding_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_share_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_usb_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_usb_on_dedicated_and_shared_workers_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_vr_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_vtt_regions_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_xr_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_xr_gamepad_support_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_xr_hit_test_enabled_ = false;
bool RuntimeEnabledFeatures::is_worker_nosniff_block_enabled_ = false;
bool RuntimeEnabledFeatures::is_worker_nosniff_warn_enabled_ = false;
bool RuntimeEnabledFeatures::is_worklet_enabled_ = true;
bool RuntimeEnabledFeatures::is_work_stealing_in_script_runner_enabled_ = false;
bool RuntimeEnabledFeatures::is_xslt_enabled_ = true;

} // namespace blink
