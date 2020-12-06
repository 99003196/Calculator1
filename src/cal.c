#include "../inc/cal.h"
#include "../test/test_cal.h"


double add_numbers(float num1, float num2)
{
    return num1 + num2;
}

float subtract_numbers(float num1, float num2)
{
	return num1 - num2;
}

double multiply_numbers(float num1, float num2)
{
    return num1 * num2;
}

float divide_numbers(float num1, float num2)
{
	return  num1 / num2 ;
}

double sin_number(float num)
{
	return sin(num);
}

double cos_number(float num)
{
	return cos(num);
}

float tan_number(float num)
{
	return tan(num);
}

float square_root(float base)
{
    return sqrt(base);
}

int factorial_of_number(int num)
{
    int result = 1;
    for(int i = 1; i <= num; i++ )
    {
        result = result * i;
    }
    return result;
}

float power(float base, float exponent)
{
    return pow(base,exponent);
}

int even_or_odd(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}

float temp_deg_to_fahren(float C)
{
    float F = (C * 9 / 5) + 32;
    return F;
}

void dispaly()
{

    int calc, cont;
    float num1, num2, num;
    while(1)
	{
    	printf("what do you want to do? ");
    	printf("\n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Sine \n 6. Cosine \n 7. Tangent \n 8. Square Root \n 9. Factorial \n 10. Power \n 11. Even or Odd Number \n 12. Temperature \n");
    	scanf("%d", &calc);
    	if(calc>=1 && calc<=4)
		{
    		printf("Enter 2 numbers: ");
    		scanf("%f %f", &num1, &num2);
		}
		else if(calc == 10)
        {
            printf("Enter 2 numbers: ");
    		scanf("%f %f", &num1, &num2);
        }
		else
		{
			printf("Enter 1 number: ");
    		scanf("%f", &num);
		}
    	switch(calc)
    	{
        	case 1:
                printf("Sum of %.2f and %.2f is %.2lf ", num1, num2, add_numbers(num1,num2));
                break;
        	case 2:
                printf("Difference between %.2f and %.2f is %.2f ", num1, num2, subtract_numbers(num1,num2));
                break;
        	case 3:
                printf("Product of %.2f and %.2f is %.2lf ", num1, num2, multiply_numbers(num1,num2));
                break;
        	case 4:
                printf("Quotient of %.2f and %.2f is %.2f ", num1, num2, divide_numbers(num1,num2));
                break;
        	case 5:
        		printf("Sine of %.2f is %.2f ", num, sin_number(num));
                break;
        	case 6:
        		printf("Cosine of %.2f is %.2f ", num, cos_number(num));
                break;
        	case 7:
        		printf("Tangent of %.2f is %.2f ", num, tan_number(num));
                break;
            case 8:
        		printf("Square root of %.2f is %.2f ", num, square_root(num));
                break;
            case 9:
        		printf("Factorial of %d is %d ", (int)num , factorial_of_number((int)num));
                break;
            case 10:
        		printf("Power of %.2f and %.2f is %.2f ", num1, num2 , power(num1,num2));
                break;
            case 11:
        		if(even_or_odd((int)num)==0)
                    printf("%d is even ", (int)num);
                else
                    printf("%d is odd ", (int)num);
                break;
             case 12:
        		printf("Temperature of %.2f celsius in fahrenheit is %.2f  ", num, temp_deg_to_fahren(num));
                break;
        	default:
                printf("Invalid option\n");
                break;
       }
       printf("\n\nDo you want to continue? (1 for yes and 0 for no): ");
       scanf("%d",&cont);
       if(cont)
       		continue;
       	else
       		return;
   }
}

