// Without arguments with return value
// call by value

#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}

int main()
{
    int c;
    c = takenumber();
    printf("The entered number is %d\n", c);

    return 0;
}
