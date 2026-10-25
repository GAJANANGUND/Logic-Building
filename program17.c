// Even or Odd number

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    if((iValue % 2) == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return EXIT_SUCCESS;
}