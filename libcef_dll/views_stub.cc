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
// $hash=c5439c177bd70bf3d8d52e0381c08d6276453183$
//

#include "include/views/cef_browser_view.h"
#include "include/views/cef_display.h"
#include "include/views/cef_label_button.h"
#include "include/views/cef_menu_button.h"
#include "include/views/cef_panel.h"
#include "include/views/cef_scroll_view.h"
#include "include/views/cef_textfield.h"
#include "include/views/cef_window.h"

#include "base/logging.h"

// STATIC STUB METHODS - Do not edit by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefBrowserView::CreateBrowserView(
    CefRefPtr<CefClient> client,
    const CefString& url,
    const CefBrowserSettings& settings,
    CefRefPtr<CefDictionaryValue> extra_info,
    CefRefPtr<CefRequestContext> request_context,
    CefRefPtr<CefBrowserViewDelegate> delegate) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefBrowserView::GetForBrowser(
    CefRefPtr<CefBrowser> browser) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefDisplay> CefDisplay::GetPrimaryDisplay() {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDisplay> CefDisplay::GetDisplayNearestPoint(
    const CefPoint& point,
    bool input_pixel_coords) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDisplay> CefDisplay::GetDisplayMatchingBounds(
    const CefRect& bounds,
    bool input_pixel_coords) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall") size_t CefDisplay::GetDisplayCount() {
  NOTIMPLEMENTED();
  return 0;
}

NO_SANITIZE("cfi-icall")
void CefDisplay::GetAllDisplays(std::vector<CefRefPtr<CefDisplay>>& displays) {
  NOTIMPLEMENTED();
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefLabelButton> CefLabelButton::CreateLabelButton(
    CefRefPtr<CefButtonDelegate> delegate,
    const CefString& text) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefMenuButton> CefMenuButton::CreateMenuButton(
    CefRefPtr<CefMenuButtonDelegate> delegate,
    const CefString& text) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefPanel> CefPanel::CreatePanel(
    CefRefPtr<CefPanelDelegate> delegate) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefScrollView> CefScrollView::CreateScrollView(
    CefRefPtr<CefViewDelegate> delegate) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTextfield> CefTextfield::CreateTextfield(
    CefRefPtr<CefTextfieldDelegate> delegate) {
  NOTIMPLEMENTED();
  return nullptr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefWindow> CefWindow::CreateTopLevelWindow(
    CefRefPtr<CefWindowDelegate> delegate) {
  NOTIMPLEMENTED();
  return nullptr;
}
