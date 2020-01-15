// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=18ad9a46ee3ff980745b796013de06379659f611$
//

#include "libcef_dll/ctocpp/cookie_access_filter_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/response_cpptoc.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefCookieAccessFilterCToCpp::CanSendCookie(CefRefPtr<CefBrowser> browser,
                                                CefRefPtr<CefFrame> frame,
                                                CefRefPtr<CefRequest> request,
                                                const CefCookie& cookie) {
  cef_cookie_access_filter_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_send_cookie))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;
  // Unverified params: browser, frame

  // Execute
  int _retval = _struct->can_send_cookie(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), &cookie);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefCookieAccessFilterCToCpp::CanSaveCookie(CefRefPtr<CefBrowser> browser,
                                                CefRefPtr<CefFrame> frame,
                                                CefRefPtr<CefRequest> request,
                                                CefRefPtr<CefResponse> response,
                                                const CefCookie& cookie) {
  cef_cookie_access_filter_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_save_cookie))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;
  // Verify param: response; type: refptr_diff
  DCHECK(response.get());
  if (!response.get())
    return false;
  // Unverified params: browser, frame

  // Execute
  int _retval = _struct->can_save_cookie(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), CefResponseCppToC::Wrap(response),
      &cookie);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefCookieAccessFilterCToCpp::CefCookieAccessFilterCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefCookieAccessFilterCToCpp::~CefCookieAccessFilterCToCpp() {}

template <>
cef_cookie_access_filter_t* CefCToCppRefCounted<
    CefCookieAccessFilterCToCpp,
    CefCookieAccessFilter,
    cef_cookie_access_filter_t>::UnwrapDerived(CefWrapperType type,
                                               CefCookieAccessFilter* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefCookieAccessFilterCToCpp,
                                   CefCookieAccessFilter,
                                   cef_cookie_access_filter_t>::kWrapperType =
    WT_COOKIE_ACCESS_FILTER;
