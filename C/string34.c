#include <stdio.h>
#include <string.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'n', 'i', 'k', 'h', 'i', 'l','\0'};
    // char str[] = "nikhil";// Complier understands null trerminator here.
    char str[79];
    gets(str);
    printf("USing custom function printstar\n");

    printstr(str);
    printf("USing printf %s\n", str);
    printf("Using puts:\n");
    puts(str);
    return 0;
}
