#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])

{
  /*  You have to create a command line utility to add/subtract/divide/multiply two numbers
    First command line argument of your c programm must be the operation.
    The next arguments being the two numbers. For example:
    >>Command.c add 45 7
    >> 52*/
  char *operation;
  int num1, num2;
  operation = argv[1];
  num1 = atoi(argv[2]);
  num2 = atoi(argv[3]);

  // printf("Operation is %s\n", operation);
  // printf("Num1 is %d\n", num1);
  // printf("Num2 is %d\n", num2);

  if (strcmp(operation, "add") == 0)
  {
    printf("%d\n", num1 + num2);
  }



  else if (strcmp(operation, "subtract") == 0)
  {
    printf("%d\n", num1 - num2);
  }



  else if (strcmp(operation, "multipy") == 0)
  {
    printf("%d\n", num1 * num2);
  }



  else if (strcmp(operation, "divide") == 0)
  {
    printf("%d\n", num1 / num2);
  }




  return 0;
}