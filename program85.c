/*
    -------------------------------------
                Operator &&
    -------------------------------------
    Result1     Result2     Final Result
    -------------------------------------
      True        False         True
      True        False         False
      False       True          False     Short Circuit
      False       False         False     Short circuit
    -------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("It is divisible by both\n");
    }
    else
    {
        printf("It is not divisible by both\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}