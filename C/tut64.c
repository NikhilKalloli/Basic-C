#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[95] = "This content was produced in association with Myself";

    // *******Reading a File*********
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("THe content of this file has: %s\n", string);



    // ******Writing a file*********
    ptr = fopen("myfile.txt", "w");// if we use "a"(append mode) instead of "w" then previous content of the file is not erased
    fprintf(ptr, "%s", string);

    return 0;
}
