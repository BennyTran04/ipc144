/***************************************************************** 

    File: lab1.c
    
    Author: Benny Tran
    Seneca email: btran39@myseneca.ca

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab1.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
#include <stdio.h>
int main(void){
    int c;
    float f;

    // Display my name
    printf("my name is Benny\n");

    // Get the temperature in celcius from the user.
    printf("Please enter the temperature in Celsius: ");
    scanf("%d", &c);

    // Calculate the temperature in Fahrenheit
    f = (9.0f/5.0f * (float)c) + 32.0f;

    //Output the answer.
    printf("%d degrees Celcius is %.2f degrees Fahrenheit\n", c, f);

    return 0;
}
