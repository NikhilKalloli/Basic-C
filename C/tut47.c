#include <stdio.h>
#include <stdlib.h> // For Dynamic Memory allocation.
int main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create\n");
        scanf("%d", &n);


    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }


 for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i,ptr[i]);
     
    }


    return 0;
}
