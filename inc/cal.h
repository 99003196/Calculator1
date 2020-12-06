/**
* @file cal.h
*
*/
#ifndef __CAL_H__
#define __CAL_H__


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "../test/test_cal.h"

/**
* Calculates the sum, difference, product, quotient, factorial, sin, cos, tan, square root, even or odd, power, temperature with 2 float values
* @param[in] num1 and num2 for which sum, difference, product, quotient, power has to be found
* @param[in] num for which sin, cos, tan, square root, factorial, even or odd, temperature has to be found
* @return sum of the numbers
* @return difference of the numbers
* @return product of the numbers
* @return quotient of the numbers
* @return sin of the number
* @return cos of the number
* @return tan of the number
* @return square root of the number
* @return factorial of the number
* @return power of the numbers
* @return even or odd of the number
* @return temperature of the number
*/


double add_numbers(float num1, float num2);
float subtract_numbers(float num1, float num2);
double multiply_numbers(float num1, float num2);
float divide_numbers(float num1, float num2);
double sin_number(float num);
double cos_number(float num);
float tan_number(float num);
float square_root(float base);
int factorial_of_number(int num);
float power(float base, float exponent);
int even_or_odd(int num);
float temp_deg_to_fahren(float C);
void dispaly();



#endif /*ifndef __CAL.H__ */
