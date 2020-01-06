#include "unity.h"
#include "dumbexample.h"

void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
TEST_ASSERT_EQUAL(40, AverageThreeBytes(21, 40, 50));
TEST_ASSERT_EQUAL(40, AverageThreeBytes(10, 70, 40));
TEST_ASSERT_EQUAL(33, AverageThreeBytes(33, 33, 33));
}

void test_AverageThreeBytes_should_AverageHighValues(void)
{
TEST_ASSERT_EQUAL(80, AverageThreeBytes(70, 80, 90));
TEST_ASSERT_EQUAL(127, AverageThreeBytes(127, 127, 127));
TEST_ASSERT_EQUAL(84, AverageThreeBytes(0, 126, 126));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);
return UNITY_END();
}