#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../source/Calculator.hpp"

TEST_CASE("CalculatorTests, add_two_numbers") {
    Calculator calculator;
    int a = 10;
    int b = 20;
    int result = calculator.add(a, b);
    REQUIRE(result == 30);
}

TEST_CASE("CalculatorTests, subtract_two_numbers") {
    Calculator calculator;
    int a = 10;
    int b = 20;
    int result = calculator.sub(a, b);
    REQUIRE(result == -10);
}

TEST_CASE("CalculatorTests, square_root_of_a_number") {
    Calculator calculator;
    int a = 100;
    int result = calculator.sqrt(a);
    REQUIRE(result == 10);
}