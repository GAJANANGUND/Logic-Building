/*
    -------------------------------------
                Operator ||
    -------------------------------------
    Result1     Result2     Final Result
    -------------------------------------
      True        True          True       Short Circuit  
      True        False         True       Short Circuit
      False       True          True
      False       False         False
    -------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("It is divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
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