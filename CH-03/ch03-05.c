/* Taking a number. Reverse it. Check if the original and reversed numbers are equal or not. */

#include <stdio.h>

int main()
{
    // Initialising variables
    int num, digit, rev = 0;

    // Taking inputs
    printf("Enter the number\n");
    scanf("%d", &num);

    int num_org = num;

    // Reversing
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    // Checking and printing
    if (rev == num)
    {
        printf("Reversed number[%d] is equal to the original number[%d]\n", rev, num_org);
    }
    else
    {
        printf("Reversed number[%d] is not equal to the original number[%d]\n", rev, num_org);
    }
    return 0;
}