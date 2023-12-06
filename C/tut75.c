#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 458617)
    {
        printf("Welcome to Code With Hary\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)

        {
            getchar();
        }
        i++;
        free(i2);  // Without this we will encounter a situation of memory leak.
    }

    return 0;
}
