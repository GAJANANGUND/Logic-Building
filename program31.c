#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName [30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name : \n"); // sName is array thats why we dont write &sName
    scanf("%[^'\n']s",sName);      // Enter remains in input buffer

    printf("Enter your age : \n");
    scanf(" %d",&iAge); // when you add space before format specifier it flush the first (Flush in C)

    printf("Enter your marks : \n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your age is : %d\n",iAge);
    printf("Your marks : %f\n",fMarks);

    return EXIT_SUCCESS;
}