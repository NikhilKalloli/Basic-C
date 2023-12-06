// HTML Parser
#include <stdio.h>
#include <string.h>
void parser(char str[])
{
 int a;
 a = strlen(str);
 for (int i = 5; i < a-5; i++)
 {
     printf("%c", str[i]);
 }

}
int main()
{
    char str[] = "<h1> This is a heading </h2>";
    parser(str);
    return 0;
 }

