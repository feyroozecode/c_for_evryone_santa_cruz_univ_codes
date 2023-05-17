#include <stdio.h>

int main(void){
    int a, b, c, sum;

    printf("Input three integers: ");
    scanf("%d%d%d", &a, &b, &c);

    // print three ints 
    printf(" a = %d, b= %d c = %d", a, b, c );

    sum = a + b + c;

    printf("\nsum = %d\n", sum);
}