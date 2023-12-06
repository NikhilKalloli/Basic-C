#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character I read was: %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was: %c\n", c);

    // fclose(ptr);

    char str[45];
    fgets(str, 45 , ptr);
    printf("The string is: %s\n", str);
    fclose(ptr);

    return 0;
}
