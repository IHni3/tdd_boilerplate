// include gtest header to use testing functionality
#include <gtest/gtest.h>

#include "../source/Calculator.h"

// single testcase first parameter is topic name, second is test name
TEST(CalculatorTest, addTest) {
  Calculator calculator;
  auto result = calculator.add(10, 50);
  EXPECT_EQ(result, 60);
}

TEST(CalculatorTest, subTest) {
  Calculator calculator;
  auto result = calculator.sub(100, 50);
  EXPECT_EQ(result, 50);
}

// a failing test looks like this
TEST(CalculatorTest, failingTest) {
  Calculator calculator;
  auto result = calculator.sub(0, 0);
  EXPECT_EQ(result, 50);
}

TEST(CalculatorTest, SqrtTest) {
  Calculator calculator;
  auto result = calculator.sqrt(9);
  EXPECT_EQ(result, 3);

  result = calculator.sqrt(16);
  EXPECT_EQ(result, 4);

  result = calculator.sqrt(25);
  EXPECT_EQ(result, 5);
}
