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
// $hash=271072f761428ca4b308b0ee5418148f11126c27$
//

#include "libcef_dll/ctocpp/v8handler_ctocpp.h"
#include "libcef_dll/cpptoc/v8value_cpptoc.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefV8HandlerCToCpp::Execute(const CefString& name,
                                 CefRefPtr<CefV8Value> object,
                                 const CefV8ValueList& arguments,
                                 CefRefPtr<CefV8Value>& retval,
                                 CefString& exception) {
  cef_v8handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, execute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return false;
  // Verify param: object; type: refptr_diff
  DCHECK(object.get());
  if (!object.get())
    return false;

  // Translate param: arguments; type: refptr_vec_diff_byref_const
  const size_t argumentsCount = arguments.size();
  cef_v8value_t** argumentsList = NULL;
  if (argumentsCount > 0) {
    argumentsList = new cef_v8value_t*[argumentsCount];
    DCHECK(argumentsList);
    if (argumentsList) {
      for (size_t i = 0; i < argumentsCount; ++i) {
        argumentsList[i] = CefV8ValueCppToC::Wrap(arguments[i]);
      }
    }
  }
  // Translate param: retval; type: refptr_diff_byref
  cef_v8value_t* retvalStruct = NULL;
  if (retval.get())
    retvalStruct = CefV8ValueCppToC::Wrap(retval);
  cef_v8value_t* retvalOrig = retvalStruct;

  // Execute
  int _retval = _struct->execute(
      _struct, name.GetStruct(), CefV8ValueCppToC::Wrap(object), argumentsCount,
      argumentsList, &retvalStruct, exception.GetWritableStruct());

  // Restore param:arguments; type: refptr_vec_diff_byref_const
  if (argumentsList)
    delete[] argumentsList;
  // Restore param:retval; type: refptr_diff_byref
  if (retvalStruct) {
    if (retvalStruct != retvalOrig) {
      retval = CefV8ValueCppToC::Unwrap(retvalStruct);
    }
  } else {
    retval = nullptr;
  }

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefV8HandlerCToCpp::CefV8HandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefV8HandlerCToCpp::~CefV8HandlerCToCpp() {}

template <>
cef_v8handler_t*
CefCToCppRefCounted<CefV8HandlerCToCpp, CefV8Handler, cef_v8handler_t>::
    UnwrapDerived(CefWrapperType type, CefV8Handler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefV8HandlerCToCpp,
                                   CefV8Handler,
                                   cef_v8handler_t>::kWrapperType =
    WT_V8HANDLER;
