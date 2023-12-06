#include <stdio.h>
#include <string.h>
/* You manage a travel agency and you want your n drivers to input their following details:
1.Name
2.Driving License No
3.Route
4. Total distance you have drove so far in kms
Your programe should be able to take n as input (Or you can take n as 3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of drivers in a systematic way.
Use structures
*/
struct driver
{
    char name[60];
    char LicNo[45];
    char Route[47];
    int Kms;
};
struct driver d1, d2, d3;

int main()
{
    printf("Enter the details of Driver number 1\n");
    printf("Enter the Name of first driver:\n");
    scanf("%s", &d1.name);

    printf("Enter the LicNo of first driver:\n");
    scanf("%s", &d1.LicNo);

    printf("Enter the Route of first driver:\n");
    scanf("%s", &d1.Route);

    printf("Enter the number of kms of first driver:\n");
    scanf("%d", &d1.Kms);

    printf("Enter the details of Driver number 2\n");
    printf("Enter the Name of second driver:\n");
    scanf("%s", &d2.name);

    printf("Enter the LicNo of second driver:\n");
    scanf("%s", &d2.LicNo);

    printf("Enter the Route of second driver:\n");
    scanf("%s", &d2.Route);

    printf("Enter the number of kms of second driver:\n");
    scanf("%d", &d2.Kms);

    printf("Enter the details of Driver number 3\n");
    printf("Enter the Name of third driver:\n");
    scanf("%s", &d3.name);

    printf("Enter the LicNo of third driver:\n");
    scanf("%s", &d3.LicNo);

    printf("Enter the Route of third driver:\n");
    scanf("%s", &d3.Route);

    printf("Enter the number of kms of third driver:\n");
    scanf("%d", &d3.Kms);

    printf("*********Printing information of these drivers*********\n");
    printf("For Driver No 1:\n Name is %s\n" , d1.name);
    printf(" LicNo is %s\n" , d1.LicNo);
    printf(" Route is %s\n" , d1.Route);
    printf(" Kms is %d\n" , d1.Kms);

    printf(" For Driver No 2:\nName is %s\n" , d2.name);
    printf(" LicNo is %s\n" , d2.LicNo);
    printf(" Route is %s\n" , d2.Route);
    printf(" Kms is %d\n" , d2.Kms);

    printf("For Driver No 3:\n Name is %s\n" , d3.name);
    printf(" LicNo is %s\n ", d3.LicNo);
    printf(" Route is %s\n" , d3.Route);
    printf(" Kms is %d\n" , d3.Kms);
    return 0;
}
