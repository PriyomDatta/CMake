#include <gtest/gtest.h>
#include "../src/Mod_1.cpp" // Include the implementation file for testing

// Test addition case
TEST(Fun2Test, Addition) {
    EXPECT_EQ(fun2(3, 5, '+'), 8);
    EXPECT_EQ(fun2(-3, 5, '+'), 2);
}

// Test subtraction case
TEST(Fun2Test, Subtraction) {
    EXPECT_EQ(fun2(10, 4, '-'), 6);
    EXPECT_EQ(fun2(4, 10, '-'), -6);
}

// Test multiplication case
TEST(Fun2Test, Multiplication) {
    EXPECT_EQ(fun2(3, 5, '*'), 15);
    EXPECT_EQ(fun2(-3, 5, '*'), -15);
}

// Test division case
TEST(Fun2Test, Division) {
    EXPECT_EQ(fun2(10, 2, '/'), 5);
    EXPECT_EQ(fun2(9, 3, '/'), 3);
}

// Test division by zero
TEST(Fun2Test, DivisionByZero) {
    EXPECT_THROW(fun2(10, 0, '/'), std::runtime_error); // Handle division by zero if implemented
}

// Test default case
TEST(Fun2Test, DefaultCase) {
    EXPECT_EQ(fun2(3, 5, '%'), 0); // Unsupported operator
    EXPECT_EQ(fun2(3, 5, 'x'), 0); // Unsupported operator
}
