﻿#pragma once    // Source encoding: utf-8 with BOM ∩
// #include <stdlib/fix/msvc_wolfcalls_about_std_functions.hpp>
//
// See e.g. Visual C++ (MSVC) warning C4996, or the article about _SCL_SECURE_NO_WARNINGS
// at <url: https://msdn.microsoft.com/en-us/library/aa985974.aspx>.
//
// NOTE: THIS WARNING SUPPRESSION IS NOT GUARANTEED TO WORK UNLESS IT'S DONE BEFORE ANY
// STANDARD LIBRARY HEADERS ARE INCLUDED. E.G. USE A FORCED INCLUDE OF THIS HEADER, OR
// A FORCED INCLUDE OF <stdlib/all/workarounds.hpp>.
//
// Copyright © 2017 Alf P. Steinbach, distributed under Boost license 1.0.

#if defined( _MSC_VER ) && !defined( STDLIB_NO_MSVC_WOLFCALLS_ABOUT_STD_FUNCTIONS_FIX )
#   undef _SCL_SECURE_NO_WARNINGS       // Avoid extra sillywarning on the #define.
#   define _SCL_SECURE_NO_WARNINGS
#endif