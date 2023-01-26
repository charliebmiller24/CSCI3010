
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Sign is computed","[Sign]"){
    REQUIRE( Sign(1) == 1);
    REQUIRE( Sign(-1) == -1);
    REQUIRE( Sign(100) == 1);
    REQUIRE( Sign(-100) == -1);
}

TEST_CASE("2s are computed","[RemoveTwos]"){
    REQUIRE( RemoveTwos(26) == 13);
    REQUIRE( RemoveTwos(7) == 7);
    REQUIRE( RemoveTwos(16) == 1);
    REQUIRE( RemoveTwos(13) == 13);
}

TEST_CASE("Nth fib is computed","[NthFibonacci]"){
    REQUIRE( NthFibonacci(1) == 1);
    REQUIRE( NthFibonacci(2) == 3);
    REQUIRE( NthFibonacci(13) == 7);
    REQUIRE( NthFibonacci(8) == 6);
}