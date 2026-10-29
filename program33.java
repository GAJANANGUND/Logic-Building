// Approach One

import java.util.Scanner;

class program33
{
    public static void main(String A[])
    {
        int iAge = 0;
        float fMarks = 0.0f;

        Scanner scanner = null;
        
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        scanner = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        iResult = iValue1 + iValue2;

        System.out.println("Addition is : "+iResult);
    }
}

