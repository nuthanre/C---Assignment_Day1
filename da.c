#include <stdio.h>
#include <math.h>
#include "da.h"


char upper_case_to_lower_case(char ch)
{
    char char_lower_case;

    char_lower_case = ch + 32; // char 'A' ASCII value is 65, char 'a' ASCII value is 97

    //printf(" char in lower case : %c ", char_lower_case);

    return char_lower_case;
}

int area_of_circle(float radius)
{
    float area ;

    area = (3.14 * radius * radius);   // formula

    //printf("\n area of the circle : %.2f", area);

    return 1;
}

int even_or_odd(int number)
{

    if((number % 2) == 0)
        return 2;          // EVEN is defined as 2

    else
        return 3;          // ODD is defined as 3
}

int leap_year(int year)
{
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 4;          // LEAP year is defined as 4

    else
        return 5;          // NOT A LEAP year is defined as 5
}


int celsius_to_fahrenheit(float celsius, float fahrenheit)
{
    float temperature_fahrenheit, temperature_celsius;

    temperature_fahrenheit = celsius * 1.8 + 32;              //converting celsius to fahrenheit

    //printf("\n temperature in fahrenheit : %f", temperature_fahrenheit);

    temperature_celsius = (5/9)*(fahrenheit - 32);            //converting fahrenheit to celsius

    //printf("\n temperature in celsius : %f", temperature_celsius);

    return 1;
}


int simple_compound_intrest(int principal, int time, float rate, int n)
{
    float simple_intrest, compound_intrest;

    simple_intrest = principal * time * rate ;
    //printf("\n %f", simple_intrest);

    compound_intrest = principal * pow((1 + (rate/n)), n*time);
    //printf("\n compound intrest = %f", compound_intrest);

    return 1;
}


int power_using_operator(int power)
{
    int result;

    result = 1 << power;       //calculating power using left shift operator

    //printf("\n Power of  = %d", result);

    return result;
}
