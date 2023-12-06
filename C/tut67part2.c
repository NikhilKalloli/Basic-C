#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");
    fputc('o', ptr);
    fputs("This is Nikhil", ptr);
    fclose(ptr);

    return 0;
 }
