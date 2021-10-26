#include "assert.h"
#include "da.h"
#define EVEN 2
#define ODD 3
#define LEAP 4
#define NOT_LEAP 5

int main()
{

    assert(upper_case_to_lower_case('A') == 'a');
    assert(upper_case_to_lower_case('N') == 'n');
    assert(upper_case_to_lower_case('H') == 'h');
    assert(upper_case_to_lower_case('R') == 'r');


    assert(area_of_circle(5.6) == 1);
    assert(area_of_circle(9) == 1);


    assert(even_or_odd(2) == EVEN);
    assert(even_or_odd(7) == ODD);


    assert(leap_year(2000) == LEAP);
    assert(leap_year(1997) == NOT_LEAP);


    assert(celsius_to_fahrenheit(32, 270) == 1);
    assert(celsius_to_fahrenheit(35, 290) == 1);


    assert(simple_compound_intrest(5000, 10, 0.05,12) == 1);
    assert(simple_compound_intrest(15000, 5, 0.07,10) == 1);


    assert(power_using_operator(4) == 16);
    assert(power_using_operator(8) == 256);


    return 0;
}
