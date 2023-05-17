/*
    The distance of marathon in kilometers

    by Ibrahim Ahmad(FeyroozeCode) 
*/

#include <stdio.h>

int main(void){

    int miles, yeards;
    double kilometers;

    // get niles and meters
    printf("Enter miles in first time: ");
    scanf("%d", &miles);
    printf("Enter yeards in second time : ");
    scanf("%d", &yeards);

    // convert miles and yeards to kilometers
    kilometers = convertMilesAndYeardTOkilometers(miles, yeards);

    printf("A marathon is %lf kilometers. \n", kilometers);

    return 0;
}

int convertMilesAndYeardTOkilometers(int miles, int yeards){
    // documnetation 
    // 1 mile = 1.609 kilometers
    // 1 yeard = 1760.0 meters
    
    return 1.609 * (miles + (yeards / 1760.0)); 
}