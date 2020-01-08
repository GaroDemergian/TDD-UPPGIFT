#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(ProductionCode)
{
  RUN_TEST_CASE(ProductionCode, testGetCircumference);
  RUN_TEST_CASE(ProductionCode, testGetArea);
  RUN_TEST_CASE(ProductionCode, testGetVolume);
}