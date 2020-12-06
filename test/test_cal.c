#include "../inc/cal.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add_positive_number(void)
{
  TEST_ASSERT_EQUAL(5, add_numbers(2,3));
  TEST_ASSERT_EQUAL(100, add_numbers(70,30));
}

void test_add_negative_number(void)
{
  TEST_ASSERT_EQUAL(-5, add_numbers(-2,-3));
  TEST_ASSERT_EQUAL(-35, add_numbers(-15, -20));
}

void test_add_with_zero(void)
{
  TEST_ASSERT_EQUAL(89, add_numbers(89,0));
  TEST_ASSERT_EQUAL(104, add_numbers(104,0));
}

void test_subtract_positive_number(void)
{
  TEST_ASSERT_EQUAL(-1, subtract_numbers(2,3));
  TEST_ASSERT_EQUAL(40, subtract_numbers(70,30));
}

void test_subtract_negative_number(void)
{
  TEST_ASSERT_EQUAL(1, subtract_numbers(-2,-3));
  TEST_ASSERT_EQUAL(5, subtract_numbers(-15, -20));
}

void test_subtract_with_zero(void)
{
  TEST_ASSERT_EQUAL(89, subtract_numbers(89,0));
  TEST_ASSERT_EQUAL(-90, subtract_numbers(0,90));
}

void test_multiply_positive_number(void)
{
  TEST_ASSERT_EQUAL(6, multiply_numbers(2,3));
  TEST_ASSERT_EQUAL(2100, multiply_numbers(70,30));
}

void test_multiply_negative_number(void)
{
  TEST_ASSERT_EQUAL(6, multiply_numbers(-2,-3));
  TEST_ASSERT_EQUAL(300, multiply_numbers(-15, -20));
}

void test_multiply_with_zero(void)
{
  TEST_ASSERT_EQUAL(0, multiply_numbers(89,0));
  TEST_ASSERT_EQUAL(0, multiply_numbers(104,0));
}

void test_multiply_with_postive_and_negative_number(void)
{
  TEST_ASSERT_EQUAL(-6, multiply_numbers(-2,3));
  TEST_ASSERT_EQUAL(-27, multiply_numbers(3,-9));
}

void test_divide_positive_number(void)
{
  TEST_ASSERT_EQUAL(2, divide_numbers(4,2));
  TEST_ASSERT_EQUAL(2, divide_numbers(60,30));
}

void test_divide_negative_number(void)
{
  TEST_ASSERT_EQUAL(2, divide_numbers(-2,-1));
  TEST_ASSERT_EQUAL(2, divide_numbers(-40, -20));
}

void test_divide_with_zero(void)
{
  TEST_ASSERT_EQUAL(0, divide_numbers(0,8));
  TEST_ASSERT_EQUAL(0, divide_numbers(0,45));
}

 void test_sine(void)
 {
     TEST_ASSERT_EQUAL(-.98, sin_number(30));
     TEST_ASSERT_EQUAL(0, sin_number(0));
 }

  void test_even_odd(void)
 {
     TEST_ASSERT_EQUAL(1, even_or_odd(8));
     TEST_ASSERT_EQUAL(0, even_or_odd(5));
 }
  void test_cosine(void)
 {
     TEST_ASSERT_EQUAL(-.98, cos_number(60));
     TEST_ASSERT_EQUAL(1, cos_number(0));
 }
  void test_tangent(void)
 {
     TEST_ASSERT_EQUAL(1.61, tan_number(45));
     TEST_ASSERT_EQUAL(0, tan_number(0));
 }

  void test_square_number(void)
 {
     TEST_ASSERT_EQUAL(5, square_root(25));
     TEST_ASSERT_EQUAL(7, square_root(49));
 }

  void test_factorial(void)
 {
     TEST_ASSERT_EQUAL(24, factorial_of_number(4));
     TEST_ASSERT_EQUAL(3628800, factorial_of_number(10));
 }

  void test_power_of_a_number(void)
 {
     TEST_ASSERT_EQUAL(8, power(2,3));
     TEST_ASSERT_EQUAL(1024, power(2,10));
 }

  void test_temperature(void)
 {
     TEST_ASSERT_EQUAL(210.2, temp_deg_to_fahren(99));
     TEST_ASSERT_EQUAL(50, temp_deg_to_fahren(10));
 }

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_positive_number);
  RUN_TEST(test_add_negative_number);
  RUN_TEST(test_add_with_zero);
  RUN_TEST(test_subtract_positive_number);
  RUN_TEST(test_subtract_negative_number);
  RUN_TEST(test_subtract_with_zero);
  RUN_TEST(test_multiply_positive_number);
  RUN_TEST(test_multiply_negative_number);
  RUN_TEST(test_multiply_with_zero);
  RUN_TEST(test_multiply_with_postive_and_negative_number);
  RUN_TEST(test_divide_positive_number);
  RUN_TEST(test_divide_negative_number);
  RUN_TEST(test_divide_with_zero);
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_tangent);
  RUN_TEST(test_square_number);
  RUN_TEST(test_factorial);
  RUN_TEST(test_power_of_a_number);
  RUN_TEST(test_temperature);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

