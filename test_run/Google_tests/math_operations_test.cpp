#include <gtest/gtest.h>
#include "math_operations.h"

// Test addition function
TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(3, 5), 8);
    int c = add(10, 20);
    EXPECT_EQ(c, 30);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-3, -7), -10);
    EXPECT_EQ(add(-10, 5), -5);
}

TEST(AdditionTest, HandlesZero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(5, 0), 5);
    EXPECT_EQ(add(0, -7), -7);
}