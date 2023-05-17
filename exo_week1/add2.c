/*

Read in Two Floats and print Sum
Feyroozecode 16th of May 2023

*/

#include <stdio.h>

int main(void){
    // decralation des vars
    float a, b, sum;

    // read in two floats
    printf("Input two floats: ");
    scanf("%f%f", &a, &b);

    // print the two floats
    printf("a = %f, b = %f\n", a, b);
    sum = a +b;  // results of sum

    // result of sum
    printf("sum = %f\n", sum); // print the sum

    return 0; // return 0 to OS (operating system) to indicate that program terminated successfully 
}