#include "Unity/src/unity.h"
#include "calculations.h"

void test_multiplication(void)
{
  TEST_ASSERT_EQUAL(15, multiplication(3, 5));
  TEST_ASSERT_EQUAL(25, multiplication(5, 5));
}

void test_resTot(void)
{
  TEST_ASSERT_EQUAL(0.545455, res_tot(1, 2, 3));
  TEST_ASSERT_EQUAL(0.818182, res_tot(5, 45, 1));
}

void test_aktiv_eff(void)
{
  TEST_ASSERT_EQUAL(6291, aktiv_eff(27, 233, 1));
  TEST_ASSERT_EQUAL(5382, aktiv_eff(234, 23, 1));
}

void test_sken_3fas(void)
{
  TEST_ASSERT_EQUAL(139828.461695, sken_3fas(345, 234));
  TEST_ASSERT_EQUAL(304840.942132, sken_3fas(400, 440));
}

void test_aktiv_3fas(void)
{
  TEST_ASSERT_EQUAL(168355.338496, aktiv_3fas(400, 243, 1));
  TEST_ASSERT_EQUAL(79.674337, aktiv_3fas(23, 2, 1));
}

int main (void)
{
  UNITY_BEGIN();
  RUN_TEST(test_multiplication);
  RUN_TEST(test_resTot);
  RUN_TEST(test_aktiv_eff);
  RUN_TEST(test_sken_3fas);
  RUN_TEST(test_aktiv_3fas);
  return UNITY_END();
}
