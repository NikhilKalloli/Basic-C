#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(int a ,int b)
{
    return a + b;
}
void greetHelloandExecute(int (*fptr)(int, int))
{
    printf("Hello World\n");
    printf("The sum of 5 and 7 is %d\n" ,fptr(5,7) );

}
void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n" ,fptr(5,7) );


}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetGmAndExecute(ptr);

    return 0;
 }
