/*
    Fahrenheit to Celsius Calculator

    C = ( F - 32) / 1.8

    By Ibrahim Ahmad(FeyroozeCode)
    in 17-05-2023
*/


#include <stdio.h>

int main() {
    int fahrenheit , celsius ;

    printf("Enter fahrenheit as an integer : ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32 ) / 1.8;
    
    // show the result
    printf("\n %d fahrenheit is %d celsius\n ",
     celsius, fahrenheit );

    return 0;
}