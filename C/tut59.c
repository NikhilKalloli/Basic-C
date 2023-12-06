#include <stdio.h>
//#include "tut54.c"
#define PI 3.14
#define SQUARE(r) r *r  // ~~~ MACRO

int main()
{
    float var = PI;
    int r = 4;
    printf("The value of PI is %f\n", var);
    printf("The area of circle is %f\n", PI * SQUARE(r));
    // We can also use functions from tut54.c here
    return 0;
}
