// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Security Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalSecurity');
goog.provide('chromium.DevTools.Security');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Security DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalSecurity = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalSecurity = chromium.DevTools.ExperimentalSecurity;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalSecurity.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Security DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Security = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalSecurity} */
  this.experimental = new ExperimentalSecurity(connection);
}

const Security = chromium.DevTools.Security;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Security.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * A description of mixed content (HTTP resources on HTTPS pages), as defined by
 * https://www.w3.org/TR/mixed-content/#categories
 *
 * @enum {string}
 */
Security.MixedContentType = {
    BLOCKABLE: "blockable",
    OPTIONALLY_BLOCKABLE: "optionally-blockable",
    NONE: "none"
};

/**
 * The security level of a page or resource.
 *
 * @enum {string}
 */
Security.SecurityState = {
    UNKNOWN: "unknown",
    NEUTRAL: "neutral",
    INSECURE: "insecure",
    SECURE: "secure",
    INFO: "info"
};

/**
 * The action to take when a certificate error occurs. continue will continue processing the
 * request and cancel will cancel the request.
 *
 * @enum {string}
 */
Security.CertificateErrorAction = {
    CONTINUE: "continue",
    CANCEL: "cancel"
};


/**
 * An explanation of an factor contributing to the security state.
 *
 * securityState: Security state representing the severity of the factor being explained.
 * title: Title describing the type of factor.
 * summary: Short phrase describing the type of factor.
 * description: Full text explanation of the factor.
 * mixedContentType: The type of mixed content described by the explanation.
 * certificate: Page certificate.
 *
 * @typedef {{
 *   securityState: !Security.SecurityState,
 *   title: string,
 *   summary: string,
 *   description: string,
 *   mixedContentType: !Security.MixedContentType,
 *   certificate: !Array.<string>
 * }}
 */
Security.SecurityStateExplanation;

/**
 * Information about insecure content on the page.
 *
 * ranMixedContent: True if the page was loaded over HTTPS and ran mixed (HTTP) content such as scripts.
 * displayedMixedContent: True if the page was loaded over HTTPS and displayed mixed (HTTP) content such as images.
 * containedMixedForm: True if the page was loaded over HTTPS and contained a form targeting an insecure url.
 * ranContentWithCertErrors: True if the page was loaded over HTTPS without certificate errors, and ran content such as
 *   scripts that were loaded with certificate errors.
 * displayedContentWithCertErrors: True if the page was loaded over HTTPS without certificate errors, and displayed content
 *   such as images that were loaded with certificate errors.
 * ranInsecureContentStyle: Security state representing a page that ran insecure content.
 * displayedInsecureContentStyle: Security state representing a page that displayed insecure content.
 *
 * @typedef {{
 *   ranMixedContent: boolean,
 *   displayedMixedContent: boolean,
 *   containedMixedForm: boolean,
 *   ranContentWithCertErrors: boolean,
 *   displayedContentWithCertErrors: boolean,
 *   ranInsecureContentStyle: !Security.SecurityState,
 *   displayedInsecureContentStyle: !Security.SecurityState
 * }}
 */
Security.InsecureContentStatus;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Security.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Security.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Security.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Security.EnableResult;

/**
 * Parameters for the SetIgnoreCertificateErrors command.
 *
 * ignore: If true, all certificate errors will be ignored.
 *
 * @typedef {{
 *   ignore: boolean
 * }}
 */
Security.SetIgnoreCertificateErrorsParams;

/**
 * Result for the SetIgnoreCertificateErrors command.
 *
 *
 * @typedef {undefined}
 */
Security.SetIgnoreCertificateErrorsResult;

/**
 * Parameters for the HandleCertificateError command.
 *
 * eventId: The ID of the event.
 * action: The action to take on the certificate error.
 *
 * @typedef {{
 *   eventId: number,
 *   action: !Security.CertificateErrorAction
 * }}
 */
Security.HandleCertificateErrorParams;

/**
 * Result for the HandleCertificateError command.
 *
 *
 * @typedef {undefined}
 */
Security.HandleCertificateErrorResult;

/**
 * Parameters for the SetOverrideCertificateErrors command.
 *
 * override: If true, certificate errors will be overridden.
 *
 * @typedef {{
 *   override: boolean
 * }}
 */
Security.SetOverrideCertificateErrorsParams;

/**
 * Result for the SetOverrideCertificateErrors command.
 *
 *
 * @typedef {undefined}
 */
Security.SetOverrideCertificateErrorsResult;

/**
 * Parameters for the CertificateError event.
 *
 * eventId: The ID of the event.
 * errorType: The type of the error.
 * requestURL: The url that was requested.
 *
 * @typedef {{
 *   eventId: number,
 *   errorType: string,
 *   requestURL: string
 * }}
 */
Security.CertificateErrorParams;

/**
 * Parameters for the SecurityStateChanged event.
 *
 * securityState: Security state.
 * schemeIsCryptographic: True if the page was loaded over cryptographic transport such as HTTPS.
 * explanations: List of explanations for the security state. If the overall security state is `insecure` or
 *   `warning`, at least one corresponding explanation should be included.
 * insecureContentStatus: Information about insecure content on the page.
 * summary: Overrides user-visible description of the state.
 *
 * @typedef {{
 *   securityState: !Security.SecurityState,
 *   schemeIsCryptographic: boolean,
 *   explanations: !Array.<!Security.SecurityStateExplanation>,
 *   insecureContentStatus: !Security.InsecureContentStatus,
 *   summary: (string|undefined)
 * }}
 */
Security.SecurityStateChangedParams;



/**
  * Disables tracking security state changes.
  *
  * @return {!Promise<Security.DisableResult>}
  */
ExperimentalSecurity.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Security.disable', {});
};

/**
  * Enables tracking security state changes.
  *
  * @return {!Promise<Security.EnableResult>}
  */
ExperimentalSecurity.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Security.enable', {});
};

/**
  * Enable/disable whether all certificate errors should be ignored.
  *
  * @param {Security.SetIgnoreCertificateErrorsParams} params
  * @return {!Promise<Security.SetIgnoreCertificateErrorsResult>}
  */
ExperimentalSecurity.prototype.setIgnoreCertificateErrors = function(params) {
  return this.connection_.sendDevToolsMessage('Security.setIgnoreCertificateErrors', params);
};

/**
  * Handles a certificate error that fired a certificateError event.
  *
  * @param {Security.HandleCertificateErrorParams} params
  * @return {!Promise<Security.HandleCertificateErrorResult>}
  */
ExperimentalSecurity.prototype.handleCertificateError = function(params) {
  return this.connection_.sendDevToolsMessage('Security.handleCertificateError', params);
};

/**
  * Enable/disable overriding certificate errors. If enabled, all certificate error events need to
 * be handled by the DevTools client and should be answered with `handleCertificateError` commands.
  *
  * @param {Security.SetOverrideCertificateErrorsParams} params
  * @return {!Promise<Security.SetOverrideCertificateErrorsResult>}
  */
ExperimentalSecurity.prototype.setOverrideCertificateErrors = function(params) {
  return this.connection_.sendDevToolsMessage('Security.setOverrideCertificateErrors', params);
};


/**
  * There is a certificate error. If overriding certificate errors is enabled, then it should be
 * handled with the `handleCertificateError` command. Note: this event does not fire if the
 * certificate error has been allowed internally. Only one client per target should override
 * certificate errors at the same time.
  *
  * @param {!function(!Security.CertificateErrorParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalSecurity.prototype.onCertificateError = function(listener) {
  return this.connection_.addEventListener(
      'Security.certificateError', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * The security state of the page changed.
  *
  * @param {!function(!Security.SecurityStateChangedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalSecurity.prototype.onSecurityStateChanged = function(listener) {
  return this.connection_.addEventListener(
      'Security.securityStateChanged', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Disables tracking security state changes.
  *
  * @return {!Promise<Security.DisableResult>}
  */
Security.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Security.disable', {});
};

/**
  * Enables tracking security state changes.
  *
  * @return {!Promise<Security.EnableResult>}
  */
Security.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Security.enable', {});
};

/**
  * Enable/disable whether all certificate errors should be ignored.
  *
  * @param {Security.SetIgnoreCertificateErrorsParams} params
  * @return {!Promise<Security.SetIgnoreCertificateErrorsResult>}
  */
Security.prototype.setIgnoreCertificateErrors = function(params) {
  return this.connection_.sendDevToolsMessage('Security.setIgnoreCertificateErrors', params);
};

/**
  * Handles a certificate error that fired a certificateError event.
  *
  * @param {Security.HandleCertificateErrorParams} params
  * @return {!Promise<Security.HandleCertificateErrorResult>}
  */
Security.prototype.handleCertificateError = function(params) {
  return this.connection_.sendDevToolsMessage('Security.handleCertificateError', params);
};

/**
  * Enable/disable overriding certificate errors. If enabled, all certificate error events need to
 * be handled by the DevTools client and should be answered with `handleCertificateError` commands.
  *
  * @param {Security.SetOverrideCertificateErrorsParams} params
  * @return {!Promise<Security.SetOverrideCertificateErrorsResult>}
  */
Security.prototype.setOverrideCertificateErrors = function(params) {
  return this.connection_.sendDevToolsMessage('Security.setOverrideCertificateErrors', params);
};


/**
  * There is a certificate error. If overriding certificate errors is enabled, then it should be
 * handled with the `handleCertificateError` command. Note: this event does not fire if the
 * certificate error has been allowed internally. Only one client per target should override
 * certificate errors at the same time.
  *
  * @param {!function(!Security.CertificateErrorParams)} listener
  * @return {number} The id of this event listener.
  */
Security.prototype.onCertificateError = function(listener) {
  return this.connection_.addEventListener(
      'Security.certificateError', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * The security state of the page changed.
  *
  * @param {!function(!Security.SecurityStateChangedParams)} listener
  * @return {number} The id of this event listener.
  */
Security.prototype.onSecurityStateChanged = function(listener) {
  return this.connection_.addEventListener(
      'Security.securityStateChanged', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

