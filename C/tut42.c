#include <stdio.h>
int b = 56;//This a global variable since it is declared outside main()

int func1(int b1) 
{

    static int myvar = 0;
    printf("THe value of myvar is %d\n", myvar);
    myvar++;

    // printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar ;
}
int main()
{
    int b = 356;
   // printf("The address of b inside main is %d\n", &b);
    // int val = func1(b1);
    // int *ptr = &val;
   // printf("The value of func1 is %d\n", val);
    // int val = func1(b);
     int val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);

     return 0;
}
