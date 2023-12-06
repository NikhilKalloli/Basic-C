#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{

    //int *a, b;
    typedef int*  intPointer;
    intPointer a, b;
    int c = 58;
    a = &c;
    b = &c;
    /*std s1, s2;
    s1.id = 45;
    s2.id = 76;
    printf("the value of s1's id is %d\n", s1.id);
    printf("the value of s2's id is %d\n", s2.id);*/

    //    // typedef <previous name> <alis_name>;
    //    typedef unsigned long ul;
    //    typedef int integer;
    //    ul l1, l2, l3;
    //    integer a = 4;
    //    printf("the value of a is %d\n",a);
    
    return 0;
}
