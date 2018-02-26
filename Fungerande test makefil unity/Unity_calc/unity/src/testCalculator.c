rahamsardar123 [12:49 PM] 
added this Plain Text snippet
#include "unity.h"
#include "calculator.h"
void test_Addition(void)
{
TEST_ASSERT_EQUAL_FLOAT(70, add(30, 40));
TEST_ASSERT_EQUAL_FLOAT(110, add(55, 55));
TEST_ASSERT_EQUAL_FLOAT(8.8, add(5.5, 3.3));
}
void test_Subtraction(void)
{
TEST_ASSERT_EQUAL_FLOAT(10, sub(50, 40));
TEST_ASSERT_EQUAL_FLOAT(6, sub(10, 4));
TEST_ASSERT_EQUAL_FLOAT(110, sub(150, 40));
}
void test_Multiplication(void)
{
TEST_ASSERT_EQUAL_FLOAT(23.22, mult(5.4, 4.3));
TEST_ASSERT_EQUAL_FLOAT(80, mult(20, 4));
TEST_ASSERT_EQUAL_FLOAT(9, mult(3, 3));
}
void test_Division(void)
{
TEST_ASSERT_EQUAL_FLOAT(2, div(8, 4));
TEST_ASSERT_EQUAL_FLOAT(5, div(10, 2));
TEST_ASSERT_EQUAL_FLOAT(5, div(50, 10));
}
int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Addition);
RUN_TEST(test_Subtraction);
RUN_TEST(test_Multiplication);
RUN_TEST(test_Division);
return UNITY_END();
}