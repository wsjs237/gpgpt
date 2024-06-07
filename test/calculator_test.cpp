#include "calculator.hpp"
#include <gtest/gtest.h>

TEST(CalculatorTest, Add) {
    Calculator calc;
    EXPECT_EQ(calc.Add(1, 2), 3);
    EXPECT_EQ(calc.Add(-1, 1), 0);
    EXPECT_EQ(calc.Add(-1, -1), -2);
}

TEST(CalculatorTest, Multiply) {
    Calculator calc;
    EXPECT_EQ(calc.Multiply(2, 3), 6);
    EXPECT_EQ(calc.Multiply(-1, 1), -1);
    EXPECT_EQ(calc.Multiply(-1, -1), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}