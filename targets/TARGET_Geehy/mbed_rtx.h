/* mbed Microcontroller Library
 * Copyright (c) 2009-2023 ARM Limited
 * Copyright (c) 2023 Geehy Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_MBED_RTX_H
#define MBED_MBED_RTX_H

#include <stdint.h>

#if defined(TARGET_APM32F407IG)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x2002000UL)
#endif

#endif

#endif  /* MBED_MBED_RTX_H */