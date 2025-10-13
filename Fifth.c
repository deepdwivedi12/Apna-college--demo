#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;  
    float total, percent;


    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    
    total = s1 + s2 + s3 + s4 + s5;
    percent = (total / 500) * 100;


    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f\n", percent);

    
    if (percent >= 90) {
        printf("Grade = A\n");
    } 
    else if (percent >= 80) {
        printf("Grade = B\n");
    } 
    else if (percent >= 70) {
        printf("Grade = C\n");
    } 
    else if (percent >= 50) {
        printf("Grade = D\n");
    } 
    else {
        printf("Fail\n");
    }

    return 0;
}


























