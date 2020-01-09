/*********************************************************************************
* Filename: all_tests.c
* 
* author: Unity
* modified by: Garo Demergian
* created: 2020-01-06
* porpose: This program is made to test some functions in calculator program.
* 
*********************************************************************************/

#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(ProductionCode);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
