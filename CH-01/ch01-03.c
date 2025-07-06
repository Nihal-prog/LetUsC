#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5, sum, pcent;
    printf("Enter marks in Sub1: ");
    scanf("%f", &sub1);
    printf("Enter marks in Sub2: ");
    scanf("%f", &sub2);
    printf("Enter marks in Sub3: ");
    scanf("%f", &sub3);
    printf("Enter marks in Sub4: ");
    scanf("%f", &sub4);
    printf("Enter marks in Sub5: ");
    scanf("%f", &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total Marks: %f\n", sum);
    pcent = (sum / 500) * 100;
    printf("Percentage: %f%\n", pcent);
    return 0;
}