// Includes header files
#include "calculator.h"
#include "unity/src/unity.h"

// Test cases for Addition
void test_Addition(void)
{	
TEST_ASSERT_EQUAL_FLOAT(70, add(30, 40)); // 70 is the expected output value and 30 and 40 is input value
TEST_ASSERT_EQUAL_FLOAT(110, add(55, 55));
TEST_ASSERT_EQUAL_FLOAT(8.8, add(5.5, 3.3));
}

// Test cases for Substraction
void test_Subtraction(void)
{
TEST_ASSERT_EQUAL_FLOAT(10, sub(50, 40)); // 10 is the expected output value and 50 and 40 is input value
TEST_ASSERT_EQUAL_FLOAT(6, sub(10, 4));
TEST_ASSERT_EQUAL_FLOAT(110, sub(150, 40));
}

// Test cases Multiplication
void test_Multiplication(void)
{
TEST_ASSERT_EQUAL_FLOAT(23.22, mult(5.4, 4.3)); // 23.22 is the expected output value 5.4 and 4.3 is input value
TEST_ASSERT_EQUAL_FLOAT(80, mult(20, 4));
TEST_ASSERT_EQUAL_FLOAT(9, mult(3, 3));
}

// Test cases for Division
void test_division(void)
{
TEST_ASSERT_EQUAL_FLOAT(2, division(8, 4)); // 2 is the expected output value and 8 and 4 is input value
TEST_ASSERT_EQUAL_FLOAT(5, division(10, 2));
TEST_ASSERT_EQUAL_FLOAT(5, division(50, 10));
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