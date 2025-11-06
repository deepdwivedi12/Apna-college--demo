#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, SN, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num%10;                 
    digits = (int)log10(num);       
    first = num/pow(10, digits);   

    middle = num%(int)pow(10, digits);
    middle = middle/10;                

    SN = last * pow(10, digits) + middle * 10 + first; and 

    printf("Number after swapping first and last digit: %d\n", SN);

    return 0;
}
