// Absolute value

#include <stdio.h>

int main()
{
    // Initialising Variables
    int num, abs;

    // Taking inputs
    printf("Enter the number\n");
    scanf("%d", &num);

    // Checking -ve or +ve
    if (num < 0)
    {
        abs = num * -1;
        printf("Absolute value of %d is %d\n", num, abs);
    }
    else
    {
        printf("Absolute value of %d is %d\n", num, num);
    }
    return 0;
}