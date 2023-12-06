//Given two numbers a and b, add them and then subtract them and assign them to a and b using call by reference



#include <stdio.h>
void addsub(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *x + *y;
    *y = temp - *y;
}

int main()
{
    int a = 9, b = 3;
    printf("Before running the function the value of a is %d and value of b is %d\n", a, b);

    addsub(&a, &b);

    printf("After running the function the value of a is %d and value of b is %d\n", a, b);
    return 0;
}
