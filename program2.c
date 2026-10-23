/*
Step 1 :    Understand the problem statement
Step 2 :    Write the Algorithm
Step 3 :    Decide the programming language
Step 4 :    Write the program
Step 5 :    Test the program
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Step 1 :    Undersand the problem statement
//              User is going to enter 2 integers 
//              And we have to perform addition

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Step 2 :    Write the Algorithm
/*
START
    Accept first number as No1
    Accept second number as No2
    Create the variable as Ans to store the result
    Perform the addition and store into Ans
    Display the result from Ans
STOP
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Step 3 :    Decide the programming language
//            We select C Programming

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Step 4 :    Write the program

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int i = 10, j = 11, k = 0;

    k = i + j;      // Business logic

    printf("%d\n",k);
    
    return 0;
}