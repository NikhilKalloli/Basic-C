#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age > 10)
        {
            continue;
        }
        printf("Nikhil is a good boy\n");
        printf("Nikhil is a good boy\n");
        printf("Nikhil is a good boy\n");
        printf("Nikhil is a good boy\n");
        printf("Nikhil is a good boy\n");
    }

    return 0;
}
