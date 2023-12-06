#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}
int main()
{
    for (int i = 0; i <= 42; i++)
    {
        printf("%d\t", fib_recursive(i));
    }

    return 0;
}
