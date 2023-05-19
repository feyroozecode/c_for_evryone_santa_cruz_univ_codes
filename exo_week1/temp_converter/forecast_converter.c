/*
    Fahrenheit to Celsius 
    and the
    Celsius to Fahrenheit
    conversions
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double fahrenheit;
    double celsius;
} TEMP; 

int main(void){

    // DEFINE VARIABLES
    bool isFahrenheit = false;
    TEMP temp;
    temp.fahrenheit = 0.0;
    temp.celsius = 0.0;

    int type = 0;

    while (isFahrenheit)
    {
        /* code */
    printf("Enter a conversion type you want to convert \n 1 - Fahrenheit to Celsius \n 2 - Celsius to Fahrenheit \n");
    scanf("%d", &type);

    if(type == 1){
        isFahrenheit = true;
    }
    else if(type == 2){
        isFahrenheit = false;
    }
    else{
        printf("Please enter a valid type \n");
    }
    
    if(isFahrenheit){
        printf("Enter fahrenheit as an integer : ");
        scanf("%lf", &temp.fahrenheit);

        temp.celsius= (temp.fahrenheit - 32 ) / 1.8;
        
        // show the result
        printf("\n %lf fahrenheit is %lf celsius ", &temp.celsius, &temp.fahrenheit );
    }
    else{
        printf("Enter celsius as an integer : ");
        scanf("%lf", &temp.celsius);

        temp.fahrenheit = (temp.celsius * 1.8) + 32;
        
        // show the result

        printf("\n %lf celsius is %lf fahrenheit\n ", temp.celsius, temp.fahrenheit );
    }

        printf("Do you want to continue ? \n 1 - Yes \n 2 - No \n");
        scanf("%d", &isFahrenheit);

    }
    

    return 0;
}