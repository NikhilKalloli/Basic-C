#include <stdio.h>
#include <stdlib.h>

int *functiondangling()
{
    int a, b, sum;
    a = 34;
    b = 369;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1 : De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[1] = 45;
    ptr[2] = 5;
    ptr[3] = 72;
    ptr[4] = 31;
    free(ptr); // ptr is now a dangling pointer

    // case 2: Function returing local variable address
    int *dangPtr = functiondangling(); // ptr is now a dangling pointer

    // case 3: If a variable goes out  of scope
    int *danglingPtr3;
    {
        int a = 17;
        danglingPtr3 = &a;
    }
    // Here variable 'a' goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

    return 0;
}
