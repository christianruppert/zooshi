// Copyright 2015 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FPL_ZOOSHI_MODULES_AUDIO_H_
#define FPL_ZOOSHI_MODULES_AUDIO_H_

#include "breadboard/event_system.h"
#include "pindrop/pindrop.h"

namespace fpl {
namespace zooshi {

void InitializeAudioModule(breadboard::EventSystem* event_system,
                           pindrop::AudioEngine* audio_engine);

}  // zooshi
}  // fpl

#endif  // FPL_ZOOSHI_MODULES_AUDIO_H_
