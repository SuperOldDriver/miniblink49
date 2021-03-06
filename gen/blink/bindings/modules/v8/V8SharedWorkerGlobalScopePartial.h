// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8SharedWorkerGlobalScopePartial_h
#define V8SharedWorkerGlobalScopePartial_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/workers/SharedWorkerGlobalScope.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8SharedWorkerGlobalScopePartial {
public:
    static void initialize();
    static void preparePrototypeObject(v8::Isolate*, v8::Local<v8::Object>, v8::Local<v8::FunctionTemplate>);
private:
    static void installV8SharedWorkerGlobalScopeTemplate(v8::Local<v8::FunctionTemplate>, v8::Isolate*);
};
}
#endif // V8SharedWorkerGlobalScopePartial_h
