/**
 * MIT License
 *
 * Copyright (c) 2021 Aswath Muthuselvam
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * @file mock_frame_transformation.hpp
 * @author Aswath Muthuselvam
 * @brief header file for mocking Simulator class member functions
 * @version 0.1
 * @date 29-11-2021
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef INCLUDE_MOCK_MOCK_SIMULATOR_H_
#define INCLUDE_MOCK_MOCK_SIMULATOR_H_

#include <gmock/gmock.h>

#include "simulator.h"

class MockSimulator : public SimulatorBase {
 public:
  MOCK_METHOD(Initialize);
};

#endif  // INCLUDE_MOCK_MOCK_SIMULATOR_H_
