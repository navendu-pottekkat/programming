/*
 * Copyright 2018 Aman Mehara
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
#ifndef MEHARA_LONGEST_COMMON_SUBSEQUENCE_H_
#define MEHARA_LONGEST_COMMON_SUBSEQUENCE_H_

#include <deque>
#include <vector>

std::deque<char> LongestCommonSubsequence(std::vector<char> sequence1, std::vector<char> sequence2);

#endif  // MEHARA_LONGEST_COMMON_SUBSEQUENCE_H_