// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Animation DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalAnimation = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalAnimation.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Animation DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Animation = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalAnimation} */
chromium.DevTools.Animation.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Animation.prototype.removeEventListener = function(id) {};

/**
 * Animation type of `Animation`.
 *
 * @enum {string}
 */
chromium.DevTools.Animation.AnimationType = {
    CSS_TRANSITION: "CSSTransition",
    CSS_ANIMATION: "CSSAnimation",
    WEB_ANIMATION: "WebAnimation"
};


/**
 * Animation instance.
 *
 * id: `Animation`'s id.
 * name: `Animation`'s name.
 * pausedState: `Animation`'s internal paused state.
 * playState: `Animation`'s play state.
 * playbackRate: `Animation`'s playback rate.
 * startTime: `Animation`'s start time.
 * currentTime: `Animation`'s current time.
 * type: Animation type of `Animation`.
 * source: `Animation`'s source animation node.
 * cssId: A unique ID for `Animation` representing the sources that triggered this CSS
 *    animation/transition.
 *
 * @typedef {{
 *   id: string,
 *   name: string,
 *   pausedState: boolean,
 *   playState: string,
 *   playbackRate: number,
 *   startTime: number,
 *   currentTime: number,
 *   type: !chromium.DevTools.Animation.AnimationType,
 *   source: (!chromium.DevTools.Animation.AnimationEffect|undefined),
 *   cssId: (string|undefined)
 * }}
 */
chromium.DevTools.Animation.Animation;

/**
 * AnimationEffect instance
 *
 * delay: `AnimationEffect`'s delay.
 * endDelay: `AnimationEffect`'s end delay.
 * iterationStart: `AnimationEffect`'s iteration start.
 * iterations: `AnimationEffect`'s iterations.
 * duration: `AnimationEffect`'s iteration duration.
 * direction: `AnimationEffect`'s playback direction.
 * fill: `AnimationEffect`'s fill mode.
 * backendNodeId: `AnimationEffect`'s target node.
 * keyframesRule: `AnimationEffect`'s keyframes.
 * easing: `AnimationEffect`'s timing function.
 *
 * @typedef {{
 *   delay: number,
 *   endDelay: number,
 *   iterationStart: number,
 *   iterations: number,
 *   duration: number,
 *   direction: string,
 *   fill: string,
 *   backendNodeId: (number|undefined),
 *   keyframesRule: (!chromium.DevTools.Animation.KeyframesRule|undefined),
 *   easing: string
 * }}
 */
chromium.DevTools.Animation.AnimationEffect;

/**
 * Keyframes Rule
 *
 * name: CSS keyframed animation's name.
 * keyframes: List of animation keyframes.
 *
 * @typedef {{
 *   name: (string|undefined),
 *   keyframes: !Array.<!chromium.DevTools.Animation.KeyframeStyle>
 * }}
 */
chromium.DevTools.Animation.KeyframesRule;

/**
 * Keyframe Style
 *
 * offset: Keyframe's time offset.
 * easing: `AnimationEffect`'s timing function.
 *
 * @typedef {{
 *   offset: string,
 *   easing: string
 * }}
 */
chromium.DevTools.Animation.KeyframeStyle;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.EnableResult;

/**
 * Parameters for the GetCurrentAnimationTime command.
 *
 * id: Id of animation.
 *
 * @typedef {{
 *   id: string
 * }}
 */
chromium.DevTools.Animation.GetCurrentAnimationTimeParams;

/**
 * Result for the GetCurrentAnimationTime command.
 *
 * currentTime: Current time of the page.
 *
 * @typedef {{
 *   currentTime: number
 * }}
 */
chromium.DevTools.Animation.GetCurrentAnimationTimeResult;

/**
 * Parameters for the GetPlaybackRate command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.GetPlaybackRateParams;

/**
 * Result for the GetPlaybackRate command.
 *
 * playbackRate: Playback rate for animations on page.
 *
 * @typedef {{
 *   playbackRate: number
 * }}
 */
chromium.DevTools.Animation.GetPlaybackRateResult;

/**
 * Parameters for the ReleaseAnimations command.
 *
 * animations: List of animation ids to seek.
 *
 * @typedef {{
 *   animations: !Array.<string>
 * }}
 */
chromium.DevTools.Animation.ReleaseAnimationsParams;

/**
 * Result for the ReleaseAnimations command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.ReleaseAnimationsResult;

/**
 * Parameters for the ResolveAnimation command.
 *
 * animationId: Animation id.
 *
 * @typedef {{
 *   animationId: string
 * }}
 */
chromium.DevTools.Animation.ResolveAnimationParams;

/**
 * Result for the ResolveAnimation command.
 *
 * remoteObject: Corresponding remote object.
 *
 * @typedef {{
 *   remoteObject: !chromium.DevTools.Runtime.RemoteObject
 * }}
 */
chromium.DevTools.Animation.ResolveAnimationResult;

/**
 * Parameters for the SeekAnimations command.
 *
 * animations: List of animation ids to seek.
 * currentTime: Set the current time of each animation.
 *
 * @typedef {{
 *   animations: !Array.<string>,
 *   currentTime: number
 * }}
 */
chromium.DevTools.Animation.SeekAnimationsParams;

/**
 * Result for the SeekAnimations command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.SeekAnimationsResult;

/**
 * Parameters for the SetPaused command.
 *
 * animations: Animations to set the pause state of.
 * paused: Paused state to set to.
 *
 * @typedef {{
 *   animations: !Array.<string>,
 *   paused: boolean
 * }}
 */
chromium.DevTools.Animation.SetPausedParams;

/**
 * Result for the SetPaused command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.SetPausedResult;

/**
 * Parameters for the SetPlaybackRate command.
 *
 * playbackRate: Playback rate for animations on page
 *
 * @typedef {{
 *   playbackRate: number
 * }}
 */
chromium.DevTools.Animation.SetPlaybackRateParams;

/**
 * Result for the SetPlaybackRate command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.SetPlaybackRateResult;

/**
 * Parameters for the SetTiming command.
 *
 * animationId: Animation id.
 * duration: Duration of the animation.
 * delay: Delay of the animation.
 *
 * @typedef {{
 *   animationId: string,
 *   duration: number,
 *   delay: number
 * }}
 */
chromium.DevTools.Animation.SetTimingParams;

/**
 * Result for the SetTiming command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Animation.SetTimingResult;

/**
 * Parameters for the AnimationCanceled event.
 *
 * id: Id of the animation that was cancelled.
 *
 * @typedef {{
 *   id: string
 * }}
 */
chromium.DevTools.Animation.AnimationCanceledParams;

/**
 * Parameters for the AnimationCreated event.
 *
 * id: Id of the animation that was created.
 *
 * @typedef {{
 *   id: string
 * }}
 */
chromium.DevTools.Animation.AnimationCreatedParams;

/**
 * Parameters for the AnimationStarted event.
 *
 * animation: Animation that was started.
 *
 * @typedef {{
 *   animation: !chromium.DevTools.Animation.Animation
 * }}
 */
chromium.DevTools.Animation.AnimationStartedParams;



/**
  * Disables animation domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Animation.DisableResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.disable = function() {};

/**
  * Enables animation domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Animation.EnableResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.enable = function() {};

/**
  * Returns the current time of the an animation.
  *
  * @param {chromium.DevTools.Animation.GetCurrentAnimationTimeParams} params
  * @return {!Promise<chromium.DevTools.Animation.GetCurrentAnimationTimeResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.getCurrentAnimationTime = function(params) {};

/**
  * Gets the playback rate of the document timeline.
  *
  * @return {!Promise<chromium.DevTools.Animation.GetPlaybackRateResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.getPlaybackRate = function() {};

/**
  * Releases a set of animations to no longer be manipulated.
  *
  * @param {chromium.DevTools.Animation.ReleaseAnimationsParams} params
  * @return {!Promise<chromium.DevTools.Animation.ReleaseAnimationsResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.releaseAnimations = function(params) {};

/**
  * Gets the remote object of the Animation.
  *
  * @param {chromium.DevTools.Animation.ResolveAnimationParams} params
  * @return {!Promise<chromium.DevTools.Animation.ResolveAnimationResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.resolveAnimation = function(params) {};

/**
  * Seek a set of animations to a particular time within each animation.
  *
  * @param {chromium.DevTools.Animation.SeekAnimationsParams} params
  * @return {!Promise<chromium.DevTools.Animation.SeekAnimationsResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.seekAnimations = function(params) {};

/**
  * Sets the paused state of a set of animations.
  *
  * @param {chromium.DevTools.Animation.SetPausedParams} params
  * @return {!Promise<chromium.DevTools.Animation.SetPausedResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.setPaused = function(params) {};

/**
  * Sets the playback rate of the document timeline.
  *
  * @param {chromium.DevTools.Animation.SetPlaybackRateParams} params
  * @return {!Promise<chromium.DevTools.Animation.SetPlaybackRateResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.setPlaybackRate = function(params) {};

/**
  * Sets the timing of an animation node.
  *
  * @param {chromium.DevTools.Animation.SetTimingParams} params
  * @return {!Promise<chromium.DevTools.Animation.SetTimingResult>}
  */
chromium.DevTools.ExperimentalAnimation.prototype.setTiming = function(params) {};


/**
  * Event for when an animation has been cancelled.
  *
  * @param {!function(!chromium.DevTools.Animation.AnimationCanceledParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalAnimation.prototype.onAnimationCanceled = function(listener) {};

/**
  * Event for each animation that has been created.
  *
  * @param {!function(!chromium.DevTools.Animation.AnimationCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalAnimation.prototype.onAnimationCreated = function(listener) {};

/**
  * Event for animation that has been started.
  *
  * @param {!function(!chromium.DevTools.Animation.AnimationStartedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalAnimation.prototype.onAnimationStarted = function(listener) {};



/**
  * Disables animation domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Animation.DisableResult>}
  */
chromium.DevTools.Animation.prototype.disable = function() {};

/**
  * Enables animation domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Animation.EnableResult>}
  */
chromium.DevTools.Animation.prototype.enable = function() {};

/**
  * Returns the current time of the an animation.
  *
  * @param {chromium.DevTools.Animation.GetCurrentAnimationTimeParams} params
  * @return {!Promise<chromium.DevTools.Animation.GetCurrentAnimationTimeResult>}
  */
chromium.DevTools.Animation.prototype.getCurrentAnimationTime = function(params) {};

/**
  * Gets the playback rate of the document timeline.
  *
  * @return {!Promise<chromium.DevTools.Animation.GetPlaybackRateResult>}
  */
chromium.DevTools.Animation.prototype.getPlaybackRate = function() {};

/**
  * Releases a set of animations to no longer be manipulated.
  *
  * @param {chromium.DevTools.Animation.ReleaseAnimationsParams} params
  * @return {!Promise<chromium.DevTools.Animation.ReleaseAnimationsResult>}
  */
chromium.DevTools.Animation.prototype.releaseAnimations = function(params) {};

/**
  * Gets the remote object of the Animation.
  *
  * @param {chromium.DevTools.Animation.ResolveAnimationParams} params
  * @return {!Promise<chromium.DevTools.Animation.ResolveAnimationResult>}
  */
chromium.DevTools.Animation.prototype.resolveAnimation = function(params) {};

/**
  * Seek a set of animations to a particular time within each animation.
  *
  * @param {chromium.DevTools.Animation.SeekAnimationsParams} params
  * @return {!Promise<chromium.DevTools.Animation.SeekAnimationsResult>}
  */
chromium.DevTools.Animation.prototype.seekAnimations = function(params) {};

/**
  * Sets the paused state of a set of animations.
  *
  * @param {chromium.DevTools.Animation.SetPausedParams} params
  * @return {!Promise<chromium.DevTools.Animation.SetPausedResult>}
  */
chromium.DevTools.Animation.prototype.setPaused = function(params) {};

/**
  * Sets the playback rate of the document timeline.
  *
  * @param {chromium.DevTools.Animation.SetPlaybackRateParams} params
  * @return {!Promise<chromium.DevTools.Animation.SetPlaybackRateResult>}
  */
chromium.DevTools.Animation.prototype.setPlaybackRate = function(params) {};

/**
  * Sets the timing of an animation node.
  *
  * @param {chromium.DevTools.Animation.SetTimingParams} params
  * @return {!Promise<chromium.DevTools.Animation.SetTimingResult>}
  */
chromium.DevTools.Animation.prototype.setTiming = function(params) {};


/**
  * Event for when an animation has been cancelled.
  *
  * @param {!function(!chromium.DevTools.Animation.AnimationCanceledParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Animation.prototype.onAnimationCanceled = function(listener) {};

/**
  * Event for each animation that has been created.
  *
  * @param {!function(!chromium.DevTools.Animation.AnimationCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Animation.prototype.onAnimationCreated = function(listener) {};

/**
  * Event for animation that has been started.
  *
  * @param {!function(!chromium.DevTools.Animation.AnimationStartedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Animation.prototype.onAnimationStarted = function(listener) {};
