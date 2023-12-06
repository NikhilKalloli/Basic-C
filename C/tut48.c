
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
    

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char *ptr;
   //char a, b;
    while (i < 3)
    {
        printf("Employee %d : Enter the number of characters in your Employee Id\n", i + 1);
        scanf("%d", &chars);

       /* getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);

        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        */


        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter the Employee Id\n");
        scanf("%s", ptr);
        printf("YOur Employee Id is %s\n", ptr);
        free(ptr);
        i++;
    }

    return 0;
}
