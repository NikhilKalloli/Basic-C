#include <stdio.h>
#include <string.h>

int main()
{
    char s1[15];
    char s2[15];
    char s3[] = " is friend of ";
    printf("Enter the first name\n");
    gets(s1);

    puts(s1);

    printf("\n");
    printf("Enter the second name\n");

    gets(s2);
    puts(s2);

    puts(strcat(s1,(strcat(s3,s2))));
   


    return 0;
}
