/*
    Calcul area of the circle
    17 / 05 / 2023
*/

#include <stdio.h>

// deinfe pi as a symbolic constant
#define PI 3.14159

// main function
int main(void){

    // DEFINE VARIABLES
    double area = 0.0, radius = 0.0;

    // Show the user what we are doing and get the input
    printf("Enter radius: ");
    scanf("%lf", &radius);

    // Perform the calculation
    area = PI * radius * radius;

    // print result to the user
    printf("radius of %f meters; area is %lf sq, meters \n", radius, area);

    return 0; // return 0 to operating system
}