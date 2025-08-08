#include <stdio.h>

int main()
{
    // Initialising variables
    float a, b, c;
    
    // Taking inputs
    printf("Enter the value of angle A: ");
    scanf("%f", &a);
    printf("Enter the value of angle B: ");
    scanf("%f", &b);
    printf("Enter the value of angle C: ");
    scanf("%f", &c);
    
    // Conditionals and printing
    if ((a + b + c) == 180)
    {
        printf("This is a valid triangle.\n");
    }
    else
    {
        printf("This isn't a valid triangle.\n");
    }
    return 0;
}