#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include "../inc/cal.h"
#define PROJECT_NAME    "Calculator"

void test_add_negative_number(void);
void test_add_positive_number(void);
void test_add_with_zero(void);
void test_subtract_negative_number(void);
void test_subtract_positive_number(void);
void test_subtract_with_zero(void);
void test_multiply_negative_number(void);
void test_multiply_positive_number(void);
void test_multiply_with_postive_and_negative_number(void);
void test_multiply_with_zero(void);
void test_divide_negative_number(void);
void test_divide_positive_number(void);
void test_divide_with_zero(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_factorial(void);
void test_power_of_a_number(void);
void test_temperature(void);
void test_even_odd(void);

int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "add_numbers", test_add_negative_number);
  CU_add_test(suite, "add_numbers", test_add_positive_number);
  CU_add_test(suite, "add_numbers", test_add_with_zero);
  CU_add_test(suite, "subtract_numbers", test_subtract_negative_number);
  CU_add_test(suite, "subtract_numbers", test_subtract_positive_number);
  CU_add_test(suite, "subtract_numbers", test_subtract_with_zero);
  CU_add_test(suite, "multiply_numbers", test_multiply_negative_number);
  CU_add_test(suite, "multiply_numbers", test_multiply_positive_number);
  CU_add_test(suite, "multiply_numbers", test_multiply_with_postive_and_negative_number);
  CU_add_test(suite, "multiply_numbers", test_multiply_with_zero);
  CU_add_test(suite, "divide_numbers", test_divide_negative_number);
  CU_add_test(suite, "divide_numbers", test_divide_positive_number);
  CU_add_test(suite, "divide_numbers", test_divide_with_zero);
  CU_add_test(suite, "sin_number", test_sine);
  CU_add_test(suite, "tan_number", test_tangent);
  CU_add_test(suite, "cos_number", test_cosine);
  CU_add_test(suite, "square_root", test_square_number);
  CU_add_test(suite, "power", test_power_of_a_number);
  CU_add_test(suite, "even_or_odd", test_even_odd);
  CU_add_test(suite, "temp_deg_to_fahren", test_temperature);
  CU_add_test(suite, "factorial-of_number", test_factorial);

  CU_basic_set_mode(CU_BRM_VERBOSE);

  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}

void test_add_positive_number(void)
{
  CU_ASSERT(5==add_numbers(2,3));
  CU_ASSERT(100==add_numbers(70,30));
}

void test_add_negative_number(void)
{
  CU_ASSERT(-5==add_numbers(-2,-3));
  CU_ASSERT(-35==add_numbers(-15, -20));
}

void test_add_with_zero(void)
{
  CU_ASSERT(89==add_numbers(89,0));
  CU_ASSERT(104==add_numbers(104,0));
}

void test_subtract_positive_number(void)
{
  CU_ASSERT(-1== subtract_numbers(2,3));
  CU_ASSERT(40==subtract_numbers(70,30));
}

void test_subtract_negative_number(void)
{
  CU_ASSERT(1==subtract_numbers(-2,-3));
  CU_ASSERT(5==subtract_numbers(-15, -20));
}

void test_subtract_with_zero(void)
{
  CU_ASSERT(89==subtract_numbers(89,0));
  CU_ASSERT(-90==subtract_numbers(0,90));
}

void test_multiply_positive_number(void)
{
  CU_ASSERT(6==multiply_numbers(2,3));
  CU_ASSERT(2100==multiply_numbers(70,30));
}

void test_multiply_negative_number(void)
{
  CU_ASSERT(6==multiply_numbers(-2,-3));
  CU_ASSERT(300==multiply_numbers(-15, -20));
}

void test_multiply_with_zero(void)
{
  CU_ASSERT(0==multiply_numbers(89,0));
  CU_ASSERT(0==multiply_numbers(104,0));
}

void test_multiply_with_postive_and_negative_number(void)
{
  CU_ASSERT(-6==multiply_numbers(-2,3));
  CU_ASSERT(-27==multiply_numbers(3,-9));
}

void test_divide_positive_number(void)
{
  CU_ASSERT(2==divide_numbers(4,2));
  CU_ASSERT(2==divide_numbers(60,30));
}

void test_divide_negative_number(void)
{
  CU_ASSERT(2==divide_numbers(-2,-1));
  CU_ASSERT(2==divide_numbers(-40, -20));
}

void test_divide_with_zero(void)
{
  CU_ASSERT(0==divide_numbers(0,8));
  CU_ASSERT(0==divide_numbers(0,45));
}

 void test_sine(void)
 {
     CU_ASSERT(-.98==sin_number(30));
     CU_ASSERT(0==sin_number(0));
 }

  void test_even_odd(void)
 {
     CU_ASSERT(1==even_or_odd(8));
     CU_ASSERT(0==even_or_odd(5));
 }
  void test_cosine(void)
 {
     CU_ASSERT(-.98==cos_number(60));
     CU_ASSERT(1==cos_number(0));
 }
  void test_tangent(void)
 {
     CU_ASSERT(1.61==tan_number(45));
     CU_ASSERT(0==tan_number(0));
 }

  void test_square_number(void)
 {
     CU_ASSERT(5==square_root(25));
     CU_ASSERT(7==square_root(49));
 }

  void test_factorial(void)
 {
     CU_ASSERT(24==factorial_of_number(4));
     CU_ASSERT(3628800==factorial_of_number(10));
 }

  void test_power_of_a_number(void)
 {
     CU_ASSERT(8==power(2,3));
     CU_ASSERT(1024==power(2,10));
 }

  void test_temperature(void)
 {
     CU_ASSERT(210.2==temp_deg_to_fahren(99));
     CU_ASSERT(50==temp_deg_to_fahren(10));
 }


