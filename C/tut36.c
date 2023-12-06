#include <stdio.h>
//  Target :89,6,5,4,3,2,1

// 7
// 1,2,3,4,5,6,89
// 89,2,3,4,5,6,1
// 89,6,3,4,5,2,1
// 89,6,5,4,3,2,1

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        // Swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 89};
    printf("Before reversing the array\n");
    arrayPrint(arr);

    arrayRev(arr);
    printf("\nAfter reversing the array\n");

    arrayPrint(arr);

    return 0;
}
