/*********************************************************************************
* Filename: TestProductionCode_Runner.c
* 
* author: Unity
* modified by: Garo Demergian
* created: 2020-01-06
* porpose: Used to test other functions in calculator program.
* 
*********************************************************************************/

#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(ProductionCode)
{
  RUN_TEST_CASE(ProductionCode, testGetCircumference);
  RUN_TEST_CASE(ProductionCode, testGetArea);
  RUN_TEST_CASE(ProductionCode, testGetVolume);
}