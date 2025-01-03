// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Security DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalSecurity = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalSecurity.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Security DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Security = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalSecurity} */
chromium.DevTools.Security.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Security.prototype.removeEventListener = function(id) {};

/**
 * A description of mixed content (HTTP resources on HTTPS pages), as defined by
 * https://www.w3.org/TR/mixed-content/#categories
 *
 * @enum {string}
 */
chromium.DevTools.Security.MixedContentType = {
    BLOCKABLE: "blockable",
    OPTIONALLY_BLOCKABLE: "optionally-blockable",
    NONE: "none"
};

/**
 * The security level of a page or resource.
 *
 * @enum {string}
 */
chromium.DevTools.Security.SecurityState = {
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
chromium.DevTools.Security.CertificateErrorAction = {
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
 *   securityState: !chromium.DevTools.Security.SecurityState,
 *   title: string,
 *   summary: string,
 *   description: string,
 *   mixedContentType: !chromium.DevTools.Security.MixedContentType,
 *   certificate: !Array.<string>
 * }}
 */
chromium.DevTools.Security.SecurityStateExplanation;

/**
 * Information about insecure content on the page.
 *
 * ranMixedContent: True if the page was loaded over HTTPS and ran mixed (HTTP) content such as scripts.
 * displayedMixedContent: True if the page was loaded over HTTPS and displayed mixed (HTTP) content such as images.
 * containedMixedForm: True if the page was loaded over HTTPS and contained a form targeting an insecure url.
 * ranContentWithCertErrors: True if the page was loaded over HTTPS without certificate errors, and ran content such as
 *    scripts that were loaded with certificate errors.
 * displayedContentWithCertErrors: True if the page was loaded over HTTPS without certificate errors, and displayed content
 *    such as images that were loaded with certificate errors.
 * ranInsecureContentStyle: Security state representing a page that ran insecure content.
 * displayedInsecureContentStyle: Security state representing a page that displayed insecure content.
 *
 * @typedef {{
 *   ranMixedContent: boolean,
 *   displayedMixedContent: boolean,
 *   containedMixedForm: boolean,
 *   ranContentWithCertErrors: boolean,
 *   displayedContentWithCertErrors: boolean,
 *   ranInsecureContentStyle: !chromium.DevTools.Security.SecurityState,
 *   displayedInsecureContentStyle: !chromium.DevTools.Security.SecurityState
 * }}
 */
chromium.DevTools.Security.InsecureContentStatus;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.EnableResult;

/**
 * Parameters for the SetIgnoreCertificateErrors command.
 *
 * ignore: If true, all certificate errors will be ignored.
 *
 * @typedef {{
 *   ignore: boolean
 * }}
 */
chromium.DevTools.Security.SetIgnoreCertificateErrorsParams;

/**
 * Result for the SetIgnoreCertificateErrors command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.SetIgnoreCertificateErrorsResult;

/**
 * Parameters for the HandleCertificateError command.
 *
 * eventId: The ID of the event.
 * action: The action to take on the certificate error.
 *
 * @typedef {{
 *   eventId: number,
 *   action: !chromium.DevTools.Security.CertificateErrorAction
 * }}
 */
chromium.DevTools.Security.HandleCertificateErrorParams;

/**
 * Result for the HandleCertificateError command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.HandleCertificateErrorResult;

/**
 * Parameters for the SetOverrideCertificateErrors command.
 *
 * override: If true, certificate errors will be overridden.
 *
 * @typedef {{
 *   override: boolean
 * }}
 */
chromium.DevTools.Security.SetOverrideCertificateErrorsParams;

/**
 * Result for the SetOverrideCertificateErrors command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Security.SetOverrideCertificateErrorsResult;

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
chromium.DevTools.Security.CertificateErrorParams;

/**
 * Parameters for the SecurityStateChanged event.
 *
 * securityState: Security state.
 * schemeIsCryptographic: True if the page was loaded over cryptographic transport such as HTTPS.
 * explanations: List of explanations for the security state. If the overall security state is `insecure` or
 *    `warning`, at least one corresponding explanation should be included.
 * insecureContentStatus: Information about insecure content on the page.
 * summary: Overrides user-visible description of the state.
 *
 * @typedef {{
 *   securityState: !chromium.DevTools.Security.SecurityState,
 *   schemeIsCryptographic: boolean,
 *   explanations: !Array.<!chromium.DevTools.Security.SecurityStateExplanation>,
 *   insecureContentStatus: !chromium.DevTools.Security.InsecureContentStatus,
 *   summary: (string|undefined)
 * }}
 */
chromium.DevTools.Security.SecurityStateChangedParams;



/**
  * Disables tracking security state changes.
  *
  * @return {!Promise<chromium.DevTools.Security.DisableResult>}
  */
chromium.DevTools.ExperimentalSecurity.prototype.disable = function() {};

/**
  * Enables tracking security state changes.
  *
  * @return {!Promise<chromium.DevTools.Security.EnableResult>}
  */
chromium.DevTools.ExperimentalSecurity.prototype.enable = function() {};

/**
  * Enable/disable whether all certificate errors should be ignored.
  *
  * @param {chromium.DevTools.Security.SetIgnoreCertificateErrorsParams} params
  * @return {!Promise<chromium.DevTools.Security.SetIgnoreCertificateErrorsResult>}
  */
chromium.DevTools.ExperimentalSecurity.prototype.setIgnoreCertificateErrors = function(params) {};

/**
  * Handles a certificate error that fired a certificateError event.
  *
  * @param {chromium.DevTools.Security.HandleCertificateErrorParams} params
  * @return {!Promise<chromium.DevTools.Security.HandleCertificateErrorResult>}
  */
chromium.DevTools.ExperimentalSecurity.prototype.handleCertificateError = function(params) {};

/**
  * Enable/disable overriding certificate errors. If enabled, all certificate error events need to
 * be handled by the DevTools client and should be answered with `handleCertificateError` commands.
  *
  * @param {chromium.DevTools.Security.SetOverrideCertificateErrorsParams} params
  * @return {!Promise<chromium.DevTools.Security.SetOverrideCertificateErrorsResult>}
  */
chromium.DevTools.ExperimentalSecurity.prototype.setOverrideCertificateErrors = function(params) {};


/**
  * There is a certificate error. If overriding certificate errors is enabled, then it should be
 * handled with the `handleCertificateError` command. Note: this event does not fire if the
 * certificate error has been allowed internally. Only one client per target should override
 * certificate errors at the same time.
  *
  * @param {!function(!chromium.DevTools.Security.CertificateErrorParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalSecurity.prototype.onCertificateError = function(listener) {};

/**
  * The security state of the page changed.
  *
  * @param {!function(!chromium.DevTools.Security.SecurityStateChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalSecurity.prototype.onSecurityStateChanged = function(listener) {};



/**
  * Disables tracking security state changes.
  *
  * @return {!Promise<chromium.DevTools.Security.DisableResult>}
  */
chromium.DevTools.Security.prototype.disable = function() {};

/**
  * Enables tracking security state changes.
  *
  * @return {!Promise<chromium.DevTools.Security.EnableResult>}
  */
chromium.DevTools.Security.prototype.enable = function() {};

/**
  * Enable/disable whether all certificate errors should be ignored.
  *
  * @param {chromium.DevTools.Security.SetIgnoreCertificateErrorsParams} params
  * @return {!Promise<chromium.DevTools.Security.SetIgnoreCertificateErrorsResult>}
  */
chromium.DevTools.Security.prototype.setIgnoreCertificateErrors = function(params) {};

/**
  * Handles a certificate error that fired a certificateError event.
  *
  * @param {chromium.DevTools.Security.HandleCertificateErrorParams} params
  * @return {!Promise<chromium.DevTools.Security.HandleCertificateErrorResult>}
  */
chromium.DevTools.Security.prototype.handleCertificateError = function(params) {};

/**
  * Enable/disable overriding certificate errors. If enabled, all certificate error events need to
 * be handled by the DevTools client and should be answered with `handleCertificateError` commands.
  *
  * @param {chromium.DevTools.Security.SetOverrideCertificateErrorsParams} params
  * @return {!Promise<chromium.DevTools.Security.SetOverrideCertificateErrorsResult>}
  */
chromium.DevTools.Security.prototype.setOverrideCertificateErrors = function(params) {};


/**
  * There is a certificate error. If overriding certificate errors is enabled, then it should be
 * handled with the `handleCertificateError` command. Note: this event does not fire if the
 * certificate error has been allowed internally. Only one client per target should override
 * certificate errors at the same time.
  *
  * @param {!function(!chromium.DevTools.Security.CertificateErrorParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Security.prototype.onCertificateError = function(listener) {};

/**
  * The security state of the page changed.
  *
  * @param {!function(!chromium.DevTools.Security.SecurityStateChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Security.prototype.onSecurityStateChanged = function(listener) {};
