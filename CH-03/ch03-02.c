// Check odd or even for a given integer

#include <stdio.h>

int main()
{
    // Initialising variables
    int num;

    // Taking input
    printf("Enter the number\n");
    scanf("%d", &num);

    // Checking odd or even and printing the output
    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }
    return 0;
}