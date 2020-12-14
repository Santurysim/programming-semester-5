/*
 *  Copyright 2020 Peter Shkenev
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

#pragma once

#define COORD(i, j, n) (i) * (n) + (j)

#define ABS(a) ((a) > 0 ? (a) : -(a))

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define SQUARE(a) (a) * (a)

#define EPS 1e-16

double f(int n, int k, int i, int j);

void synchronize(int threads_amount);

long get_thread_time(void);
