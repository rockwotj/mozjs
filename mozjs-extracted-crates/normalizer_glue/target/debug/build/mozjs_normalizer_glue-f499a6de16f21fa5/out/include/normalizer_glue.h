/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef js_normalizer_glue_h
#define js_normalizer_glue_h

/* Generated with cbindgen:0.29.4 */

/* DO NOT MODIFY THIS MANUALLY! This file was generated using cbindgen. */

#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

enum class NormalizationForm {
  NFC = 0,
  NFKC = 1,
  NFD = 2,
  NFKD = 3,
};

extern "C" {

JSLinearString *js_normalize(JSContext *cx,
                             NormalizationForm form,
                             JSLinearString *in_string,
                             bool latin1);

bool js_normalize_utf16(NormalizationForm form, const uint16_t *ptr, uintptr_t len, void *buffer);

bool js_normalize_latin1(NormalizationForm form, const uint8_t *ptr, uintptr_t len, void *buffer);

uint32_t mozilla_canonical_composition(uint32_t a, uint32_t b);

uint8_t mozilla_canonical_combining_class(uint32_t c);

}  // extern "C"

#endif  // js_normalizer_glue_h
