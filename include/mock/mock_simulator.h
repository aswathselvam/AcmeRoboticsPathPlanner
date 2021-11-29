
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "simulator.h"


class MockSimulator: public SimulatorBase{
 public:
    MOCK_CONST_METHOD(bool,Initialize,());
};
