#include "unity.h"
#include "calc_percentage.h"

void test_calc_percentage(void)
{
    TEST_ASSERT_EQUAL(90.25, calc_percentage(541.5,6));
}
int test_calc_gpa(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_calc_percentage);
    return UNITY_END();
}