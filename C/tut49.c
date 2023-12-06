#include <stdio.h>
// #include"temp49.c"
// int sum;
int myfunc(int a, int b)
{
    //auto int sum;
   extern int sum;
    // sum = a + b;
    return sum;
}

   int sum = 74;
int main()
{
    // Declaration - Telling the complier about the variable(No space Reserved)
    // defination - Declaration + Space Reservation
    
    int sum = myfunc(5, 4);
    printf("The sum is %d\n", sum);

    return 0;
}
