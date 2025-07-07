// Reverse the digits of a number.
#include <stdio.h>

int main()
{
    // Initialising variables
    int num, digit, rev = 0;

    // Taking input
    printf("Enter the number\n");
    scanf("%d", &num);

    // Iterating through the digits
    while (num > 0)
    {
        // Extracting each digit
        digit = num % 10;
        // Adding the digit to the 10th multiple of rev
        rev = rev * 10 + digit;
        // Dividing the number to avoid repetation
        num = num / 10;
    }

    // Printing output
    printf("Reversed: %d\n", rev);
    return 0;
}