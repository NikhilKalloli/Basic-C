#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i ,argv[i]);
    }
    // Refer Video for more clarity.

    return 0;
}
