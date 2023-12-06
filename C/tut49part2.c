#include <stdio.h>
#include"temp49.c"
// int myVar;
int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);

    // myVar = a + b;
    return myVar;
}

int main()
{
    // Declaration - Telling the complier about the variable(No space Reserved)
    // defination - Declaration + Space Reservation
    // register int myVar = myfunc(5, 4);
    // myVar = myfunc(5, 4);
    // myVar = myfunc(5, 4);
    // myVar = myfunc(5, 4);
    // myVar = myfunc(5, 4);
    // printf("The myVar is %d\n", myVar);
    printf("%d",sum);

    return 0;
}
