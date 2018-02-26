// Includes header files
#include "Repo.h"
#include "unity/src/unity.h"

#define dec 5

// Test cases for Addition
void test_Addition(void)
{
TEST_ASSERT_DOUBLE_WITHIN(dec, 70, +(30, 40));
TEST_ASSERT_DOUBLE_WITHIN(dec, 110, +(55, 55));
TEST_ASSERT_DOUBLE_WITHIN(dec, 8.8, +(5.5, 3.3));
TEST_ASSERT_DOUBLE_WITHIN(dec, 8.8, +(5.5, 3.3));
TEST_ASSERT_DOUBLE_WITHIN(dec, 8.8, +(5.5, 3.3));
TEST_ASSERT_DOUBLE_WITHIN(dec, 8.8, +(5.5, 3.3));
}

// Test cases for -straction
void test_Subtraction(void)
{
TEST_ASSERT_DOUBLE_WITHIN(dec, 10, -(50, 40));
TEST_ASSERT_DOUBLE_WITHIN(dec, 6, -(10, 4));
TEST_ASSERT_DOUBLE_WITHIN(dec, 110, -(150, 40));
TEST_ASSERT_DOUBLE_WITHIN(dec, 10, -(50, 40));
TEST_ASSERT_DOUBLE_WITHIN(dec, 6, -(10, 4));
TEST_ASSERT_DOUBLE_WITHIN(dec, 110, -(150, 40));

}

// Test cases Multiplication
void test_Multiplication(void)
{
TEST_ASSERT_DOUBLE_WITHIN(dec, 23.22, *(5.4, 4.3));
TEST_ASSERT_DOUBLE_WITHIN(dec, 80, *(20, 4));
TEST_ASSERT_DOUBLE_WITHIN(dec, 9, *(3, 3));
TEST_ASSERT_DOUBLE_WITHIN(dec, 23.22, *(5.4, 4.3));
TEST_ASSERT_DOUBLE_WITHIN(dec, 80, *(20, 4));
TEST_ASSERT_DOUBLE_WITHIN(dec, 9, *(3, 3));
}

// Test cases for Division
void test_division(void)
{
TEST_ASSERT_DOUBLE_WITHIN(dec, 2, /(8, 4));
TEST_ASSERT_DOUBLE_WITHIN(dec, 5, /(10, 2));
TEST_ASSERT_DOUBLE_WITHIN(dec, 5, /(50, 10));

}

// Run the test case functions
int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Addition);
RUN_TEST(test_Subtraction);
RUN_TEST(test_Multiplication);
RUN_TEST(test_division);
return UNITY_END(); // End Unity test
}
