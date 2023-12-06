#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, j = 0;
    for (i = 0;;)
    {
        printf("%d %d\t", i, j);
        i++, j++;
    }

    return 0;
}
