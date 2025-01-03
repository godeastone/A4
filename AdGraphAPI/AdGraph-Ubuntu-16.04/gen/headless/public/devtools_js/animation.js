// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Animation Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalAnimation');
goog.provide('chromium.DevTools.Animation');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');
goog.require('chromium.DevTools.DOM');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;
const DOM = chromium.DevTools.DOM;

/**
 * Experimental bindings for the Animation DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalAnimation = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalAnimation = chromium.DevTools.ExperimentalAnimation;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalAnimation.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Animation DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Animation = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalAnimation} */
  this.experimental = new ExperimentalAnimation(connection);
}

const Animation = chromium.DevTools.Animation;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Animation.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Animation type of `Animation`.
 *
 * @enum {string}
 */
Animation.AnimationType = {
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
 *   animation/transition.
 *
 * @typedef {{
 *   id: string,
 *   name: string,
 *   pausedState: boolean,
 *   playState: string,
 *   playbackRate: number,
 *   startTime: number,
 *   currentTime: number,
 *   type: !Animation.AnimationType,
 *   source: (!Animation.AnimationEffect|undefined),
 *   cssId: (string|undefined)
 * }}
 */
Animation.Animation;

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
 *   keyframesRule: (!Animation.KeyframesRule|undefined),
 *   easing: string
 * }}
 */
Animation.AnimationEffect;

/**
 * Keyframes Rule
 *
 * name: CSS keyframed animation's name.
 * keyframes: List of animation keyframes.
 *
 * @typedef {{
 *   name: (string|undefined),
 *   keyframes: !Array.<!Animation.KeyframeStyle>
 * }}
 */
Animation.KeyframesRule;

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
Animation.KeyframeStyle;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Animation.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Animation.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Animation.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Animation.EnableResult;

/**
 * Parameters for the GetCurrentAnimationTime command.
 *
 * id: Id of animation.
 *
 * @typedef {{
 *   id: string
 * }}
 */
Animation.GetCurrentAnimationTimeParams;

/**
 * Result for the GetCurrentAnimationTime command.
 *
 * currentTime: Current time of the page.
 *
 * @typedef {{
 *   currentTime: number
 * }}
 */
Animation.GetCurrentAnimationTimeResult;

/**
 * Parameters for the GetPlaybackRate command.
 *
 *
 * @typedef {undefined}
 */
Animation.GetPlaybackRateParams;

/**
 * Result for the GetPlaybackRate command.
 *
 * playbackRate: Playback rate for animations on page.
 *
 * @typedef {{
 *   playbackRate: number
 * }}
 */
Animation.GetPlaybackRateResult;

/**
 * Parameters for the ReleaseAnimations command.
 *
 * animations: List of animation ids to seek.
 *
 * @typedef {{
 *   animations: !Array.<string>
 * }}
 */
Animation.ReleaseAnimationsParams;

/**
 * Result for the ReleaseAnimations command.
 *
 *
 * @typedef {undefined}
 */
Animation.ReleaseAnimationsResult;

/**
 * Parameters for the ResolveAnimation command.
 *
 * animationId: Animation id.
 *
 * @typedef {{
 *   animationId: string
 * }}
 */
Animation.ResolveAnimationParams;

/**
 * Result for the ResolveAnimation command.
 *
 * remoteObject: Corresponding remote object.
 *
 * @typedef {{
 *   remoteObject: !Runtime.RemoteObject
 * }}
 */
Animation.ResolveAnimationResult;

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
Animation.SeekAnimationsParams;

/**
 * Result for the SeekAnimations command.
 *
 *
 * @typedef {undefined}
 */
Animation.SeekAnimationsResult;

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
Animation.SetPausedParams;

/**
 * Result for the SetPaused command.
 *
 *
 * @typedef {undefined}
 */
Animation.SetPausedResult;

/**
 * Parameters for the SetPlaybackRate command.
 *
 * playbackRate: Playback rate for animations on page
 *
 * @typedef {{
 *   playbackRate: number
 * }}
 */
Animation.SetPlaybackRateParams;

/**
 * Result for the SetPlaybackRate command.
 *
 *
 * @typedef {undefined}
 */
Animation.SetPlaybackRateResult;

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
Animation.SetTimingParams;

/**
 * Result for the SetTiming command.
 *
 *
 * @typedef {undefined}
 */
Animation.SetTimingResult;

/**
 * Parameters for the AnimationCanceled event.
 *
 * id: Id of the animation that was cancelled.
 *
 * @typedef {{
 *   id: string
 * }}
 */
Animation.AnimationCanceledParams;

/**
 * Parameters for the AnimationCreated event.
 *
 * id: Id of the animation that was created.
 *
 * @typedef {{
 *   id: string
 * }}
 */
Animation.AnimationCreatedParams;

/**
 * Parameters for the AnimationStarted event.
 *
 * animation: Animation that was started.
 *
 * @typedef {{
 *   animation: !Animation.Animation
 * }}
 */
Animation.AnimationStartedParams;



/**
  * Disables animation domain notifications.
  *
  * @return {!Promise<Animation.DisableResult>}
  */
ExperimentalAnimation.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Animation.disable', {});
};

/**
  * Enables animation domain notifications.
  *
  * @return {!Promise<Animation.EnableResult>}
  */
ExperimentalAnimation.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Animation.enable', {});
};

/**
  * Returns the current time of the an animation.
  *
  * @param {Animation.GetCurrentAnimationTimeParams} params
  * @return {!Promise<Animation.GetCurrentAnimationTimeResult>}
  */
ExperimentalAnimation.prototype.getCurrentAnimationTime = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.getCurrentTime', params);
};

/**
  * Gets the playback rate of the document timeline.
  *
  * @return {!Promise<Animation.GetPlaybackRateResult>}
  */
ExperimentalAnimation.prototype.getPlaybackRate = function() {
  return this.connection_.sendDevToolsMessage('Animation.getPlaybackRate', {});
};

/**
  * Releases a set of animations to no longer be manipulated.
  *
  * @param {Animation.ReleaseAnimationsParams} params
  * @return {!Promise<Animation.ReleaseAnimationsResult>}
  */
ExperimentalAnimation.prototype.releaseAnimations = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.releaseAnimations', params);
};

/**
  * Gets the remote object of the Animation.
  *
  * @param {Animation.ResolveAnimationParams} params
  * @return {!Promise<Animation.ResolveAnimationResult>}
  */
ExperimentalAnimation.prototype.resolveAnimation = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.resolveAnimation', params);
};

/**
  * Seek a set of animations to a particular time within each animation.
  *
  * @param {Animation.SeekAnimationsParams} params
  * @return {!Promise<Animation.SeekAnimationsResult>}
  */
ExperimentalAnimation.prototype.seekAnimations = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.seekAnimations', params);
};

/**
  * Sets the paused state of a set of animations.
  *
  * @param {Animation.SetPausedParams} params
  * @return {!Promise<Animation.SetPausedResult>}
  */
ExperimentalAnimation.prototype.setPaused = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.setPaused', params);
};

/**
  * Sets the playback rate of the document timeline.
  *
  * @param {Animation.SetPlaybackRateParams} params
  * @return {!Promise<Animation.SetPlaybackRateResult>}
  */
ExperimentalAnimation.prototype.setPlaybackRate = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.setPlaybackRate', params);
};

/**
  * Sets the timing of an animation node.
  *
  * @param {Animation.SetTimingParams} params
  * @return {!Promise<Animation.SetTimingResult>}
  */
ExperimentalAnimation.prototype.setTiming = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.setTiming', params);
};


/**
  * Event for when an animation has been cancelled.
  *
  * @param {!function(!Animation.AnimationCanceledParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalAnimation.prototype.onAnimationCanceled = function(listener) {
  return this.connection_.addEventListener(
      'Animation.animationCanceled', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Event for each animation that has been created.
  *
  * @param {!function(!Animation.AnimationCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalAnimation.prototype.onAnimationCreated = function(listener) {
  return this.connection_.addEventListener(
      'Animation.animationCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Event for animation that has been started.
  *
  * @param {!function(!Animation.AnimationStartedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalAnimation.prototype.onAnimationStarted = function(listener) {
  return this.connection_.addEventListener(
      'Animation.animationStarted', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Disables animation domain notifications.
  *
  * @return {!Promise<Animation.DisableResult>}
  */
Animation.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Animation.disable', {});
};

/**
  * Enables animation domain notifications.
  *
  * @return {!Promise<Animation.EnableResult>}
  */
Animation.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Animation.enable', {});
};

/**
  * Returns the current time of the an animation.
  *
  * @param {Animation.GetCurrentAnimationTimeParams} params
  * @return {!Promise<Animation.GetCurrentAnimationTimeResult>}
  */
Animation.prototype.getCurrentAnimationTime = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.getCurrentTime', params);
};

/**
  * Gets the playback rate of the document timeline.
  *
  * @return {!Promise<Animation.GetPlaybackRateResult>}
  */
Animation.prototype.getPlaybackRate = function() {
  return this.connection_.sendDevToolsMessage('Animation.getPlaybackRate', {});
};

/**
  * Releases a set of animations to no longer be manipulated.
  *
  * @param {Animation.ReleaseAnimationsParams} params
  * @return {!Promise<Animation.ReleaseAnimationsResult>}
  */
Animation.prototype.releaseAnimations = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.releaseAnimations', params);
};

/**
  * Gets the remote object of the Animation.
  *
  * @param {Animation.ResolveAnimationParams} params
  * @return {!Promise<Animation.ResolveAnimationResult>}
  */
Animation.prototype.resolveAnimation = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.resolveAnimation', params);
};

/**
  * Seek a set of animations to a particular time within each animation.
  *
  * @param {Animation.SeekAnimationsParams} params
  * @return {!Promise<Animation.SeekAnimationsResult>}
  */
Animation.prototype.seekAnimations = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.seekAnimations', params);
};

/**
  * Sets the paused state of a set of animations.
  *
  * @param {Animation.SetPausedParams} params
  * @return {!Promise<Animation.SetPausedResult>}
  */
Animation.prototype.setPaused = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.setPaused', params);
};

/**
  * Sets the playback rate of the document timeline.
  *
  * @param {Animation.SetPlaybackRateParams} params
  * @return {!Promise<Animation.SetPlaybackRateResult>}
  */
Animation.prototype.setPlaybackRate = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.setPlaybackRate', params);
};

/**
  * Sets the timing of an animation node.
  *
  * @param {Animation.SetTimingParams} params
  * @return {!Promise<Animation.SetTimingResult>}
  */
Animation.prototype.setTiming = function(params) {
  return this.connection_.sendDevToolsMessage('Animation.setTiming', params);
};


/**
  * Event for when an animation has been cancelled.
  *
  * @param {!function(!Animation.AnimationCanceledParams)} listener
  * @return {number} The id of this event listener.
  */
Animation.prototype.onAnimationCanceled = function(listener) {
  return this.connection_.addEventListener(
      'Animation.animationCanceled', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Event for each animation that has been created.
  *
  * @param {!function(!Animation.AnimationCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
Animation.prototype.onAnimationCreated = function(listener) {
  return this.connection_.addEventListener(
      'Animation.animationCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Event for animation that has been started.
  *
  * @param {!function(!Animation.AnimationStartedParams)} listener
  * @return {number} The id of this event listener.
  */
Animation.prototype.onAnimationStarted = function(listener) {
  return this.connection_.addEventListener(
      'Animation.animationStarted', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

