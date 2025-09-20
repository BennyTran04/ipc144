/***************************************************************** 

    File: lab2.c

    Author: Benny Tran
    Seneca email: btran39@myseneca.ca

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/

#include <stdio.h>

int lastDigit(int number) { 
    return number % 10; 
}
int wholeMinutes(int seconds) { 
    return seconds / 60; 
}