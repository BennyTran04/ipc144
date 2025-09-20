/***************************************************************** 

    File: lab2main.c

    Author: Benny Tran
    Seneca email: Btran39@myseneca.ca

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio

#include <stdio.h>

int main(void) {
    //------------------------------------------------------------------------------
    //Function: lastDigit
    //Purpose: When user has inputted a number, give the last digit of the number.
    //Argrument: Number (int) - assumed to be non-negative.
    //Returns: int the last digit of 'number'
int lastDigit(int number);
//--------------------------------------------------------------------------------------
//Function: wholeMinutes
//Purpose: When user has inputted seconds, translate it into minutes.
//Arguments: seconds (int) - assumed to be non-negative.
//Returns: int -floor(seconds / 60).
int wholeMinutes(int seconds);

    int n, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("lastDigit(%d) = %d\n", n, lastDigit(n));

    printf("Enter seconds: ");
    scanf("%d", &s);
    printf("wholeMinutes(%d) = %d\n", s, wholeMinutes(s));
    return 0;
}
