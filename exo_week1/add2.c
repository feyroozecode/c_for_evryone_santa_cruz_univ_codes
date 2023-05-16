/*

Read in Two Floats and print Sum
Feyroozecode 16th of May 2023

*/

#include <stdio.h>

int main(void){
    float a, b, sum;

    printf("Input two floats: ");
    scanf("%f%f", &a, &b);
    printf("a = %f, b = %f\n", a, b);
    sum = a +b;

    // result of sum
    printf("sum = %f\n", sum);

    return 0;
}