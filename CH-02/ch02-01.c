// Sum of digits of a number.
#include <stdio.h>

int main()
{
    // Initialising the variables; sum = 0 to avoid garbage values
    int num, digit, sum = 0;

    // Taking input
    printf("Enter a five digit number.\n");
    scanf("%d", &num);

    // Iterating through the digits with a loop
    while (num > 0)
    {
        // Extracting digits
        digit = num % 10;
        // Adding extracted digits to the sum variable
        sum += digit;
        // Dividing by 10 to move on to the next digits and avoid an infinite loop
        num = num / 10;
    }

    // Printing output
    printf("Sum of digits %d\n", sum);
    return 0;
}