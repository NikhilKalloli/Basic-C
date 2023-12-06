#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {

        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 765; // Very important point if you change any value here,it gets reflected in main function
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {

        printf("The value at %d is %d\n", i, ptr[i]);//*(ptr+i)
        
    }
    *(ptr + 2) = 1947;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d ,%d is %d\n", i, j,arr[i][j]);
        
    }
    
}
   }
int main()
{
    //int arr[] = {2, 5, 8, 97, 65};
    int arr[][2] = {{1, 8}, {3, 9}};
    // printf("THe value at index 0 is %d\n", arr[0]);

    // func1(arr);
    // printf("THe value at index 0 is %d\n", arr[0]);
    // Array as a parameter
    //  func2(arr);
    //  func2(arr);
   // by passing array's base address to function

   func3(arr);

    return 0;
}
