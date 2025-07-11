// Check leap year or not

#include <stdio.h>

int main()
{
    // Initialising variables
    int year;

    // Taking inputs
    printf("Enter the year\n");
    scanf("%d", &year);

    // Checking and printing
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("Leap year.\n");
    }
    else
    {
        printf("Not a leap year.\n");
    }
    return 0;
}