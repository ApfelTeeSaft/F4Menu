// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_REF_PTR_CLIENT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_REF_PTR_CLIENT_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/test/cef_translator_test.h"
#include "include/capi/test/cef_translator_test_capi.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefTranslatorTestRefPtrClientCToCpp
    : public CefCToCppRefCounted<CefTranslatorTestRefPtrClientCToCpp,
        CefTranslatorTestRefPtrClient, cef_translator_test_ref_ptr_client_t> {
 public:
  CefTranslatorTestRefPtrClientCToCpp();

  // CefTranslatorTestRefPtrClient methods.
  int GetValue() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_REF_PTR_CLIENT_CTOCPP_H_