#include "unity.h"
#include "testfunktioner.h"

void unity_omkrets(void)
{
TEST_ASSERT_EQUAL_FLOAT(70, unity_test_omkrets(40, 10, 10, 10));
TEST_ASSERT_EQUAL_FLOAT(120, unity_test_omkrets(60, 20, 20, 20));
TEST_ASSERT_EQUAL_FLOAT(100, unity_test_omkrets(50, 10, 20, 20));
//TEST_ASSERT_EQUAL_FLOAT(1202, unity_test_omkrets(1202, 120, 130, 130,)); // Medvetna fel som kan kommernteras bort eller användas.
//TEST_ASSERT_EQUAL_FLOAT(120, unity_test_omkrets(130, 102, 103, 120,)); // Medvetna fel som kan kommernteras bort eller användas.
//TEST_ASSERT_EQUAL_FLOAT(1120, unity_test_omkrets(120, 103, 104, 103,)); // Medvetna fel som kan kommernteras bort eller användas.
}

void unity_area(void)
{
TEST_ASSERT_EQUAL_FLOAT(100, unity_test_area(10, 10));
TEST_ASSERT_EQUAL_FLOAT(40, unity_test_area(10, 4));
TEST_ASSERT_EQUAL_FLOAT(200, unity_test_area(10, 20));
//TEST_ASSERT_EQUAL_FLOAT(4230, unity_test_area(150, 210)); // Medvetna fel som kan kommernteras bort eller användas.
//TEST_ASSERT_EQUAL_FLOAT(230, unity_test_area(133, 230)); // Medvetna fel som kan kommernteras bort eller användas.
//TEST_ASSERT_EQUAL_FLOAT(1130, unity_test_area(150, 250)); // Medvetna fel som kan kommernteras bort eller användas.
}

void unity_volym(void)
{
TEST_ASSERT_EQUAL_FLOAT(125, unity_test_volym(5, 5, 5));
TEST_ASSERT_EQUAL_FLOAT(1000, unity_test_volym(10, 10, 10));
TEST_ASSERT_EQUAL_FLOAT(27, unity_test_volym(3, 3 , 3));
//TEST_ASSERT_EQUAL_FLOAT(27, unity_test_volym(3, 6 , 3)); // Medvetna fel som kan kommernteras bort eller användas.
//TEST_ASSERT_EQUAL_FLOAT(47, unity_test_volym(3, 3 , 9)); // Medvetna fel som kan kommernteras bort eller användas.
//TEST_ASSERT_EQUAL_FLOAT(73, unity_test_volym(3, 34 , 3)); // Medvetna fel som kan kommernteras bort eller användas.
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(unity_omkrets);
RUN_TEST(unity_area);
RUN_TEST(unity_volym);
return UNITY_END();
}
