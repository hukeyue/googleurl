// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef POLYFILLS_BASE_COMPONENT_EXPORT_H_
#define POLYFILLS_BASE_COMPONENT_EXPORT_H_

#if defined(_WIN32)
#  if defined(GOOGLEURL_BUILD_DLL)
#     define COMPONENT_EXPORT(component) __declspec(dllexport)
#  elif defined(GOOGLEURL_CONSUME_DLL)
#     define COMPONENT_EXPORT(component) __declspec(dllimport)
#  else
#    define COMPONENT_EXPORT(component)
#  endif
#else
#  if defined(GOOGLEURL_BUILD_DLL)
#     define COMPONENT_EXPORT(component) __attribute__((visibility("default")))
#  elif defined(GOOGLEURL_CONSUME_DLL)
#     define COMPONENT_EXPORT(component)
#  else
#    define COMPONENT_EXPORT(component)
#  endif
#endif  // defined(_WIN32)

#endif  /* POLYFILLS_BASE_COMPONENT_EXPORT_H_ */
