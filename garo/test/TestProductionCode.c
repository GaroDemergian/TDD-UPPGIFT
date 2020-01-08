#include "CalculatorFunctions.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ProductionCode);

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided
extern int Counter;

TEST_SETUP(ProductionCode)
{
}

TEST_TEAR_DOWN(ProductionCode)
{
}

TEST(ProductionCode, testGetCircumference)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(20, getCircumference(5, 5));
  TEST_ASSERT_EQUAL(4, getCircumference(1, 1));
  TEST_ASSERT_EQUAL(3996, getCircumference(999, 999));
}

TEST(ProductionCode, testGetArea)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(1, getArea(1, 1));
  TEST_ASSERT_EQUAL(998001, getArea(999, 999));
  TEST_ASSERT_EQUAL(100, getArea(10, 10));
}

TEST(ProductionCode, testGetVolume)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(1, getVolume(1, 1, 1));
  TEST_ASSERT_EQUAL(997002999, getVolume(999, 999, 999));
  TEST_ASSERT_EQUAL(1000, getVolume(10, 10, 10));
}