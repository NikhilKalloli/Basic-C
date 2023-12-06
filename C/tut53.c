#include <stdio.h>
#include <string.h>
int main()
{
    int a = 34;
    int *ptr = NULL; //&a
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }

    else
    {
        printf("The Pointer is a NULL pointer and cannot be dereferenced");
    }

    return 0;
}
