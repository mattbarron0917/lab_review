#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  REQUIRE(removeLeadingSpaces("   int x = 1;  ") == "int x = 1;  ");
  REQUIRE(removeLeadingSpaces("      hello   .") == "hello   .");
  REQUIRE(removeLeadingSpaces(" world;") == "world;");
}

TEST_CASE("Task B"){
  REQUIRE(countChar("int main(){{}}", '{') == 2);
  REQUIRE(countChar("while(){}}}", '}') == 3);
  REQUIRE(countChar("hellohey hhh", 'h') == 5 );
}
