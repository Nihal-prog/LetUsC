#include <stdio.h>

int main()
{
    // Initialising Variables
    int ram, shayam, ajay;

    // Taking inputs
    printf("Enter Ram's age: ");
    scanf("%d", &ram);
    printf("Enter Shayam's age: ");
    scanf("%d", &shayam);
    printf("Enter Ajay's age: ");
    scanf("%d", &ajay);

    // Using conditionals to print output
    if (ram < shayam && ram < ajay)
    {
        printf("Ram is the youngest\n");
    }
    else if (shayam < ram && shayam < ajay)
    {
        printf("Shayam is the youngest.\n");
    }
    else
    {
        printf("Ajay is the youngest.\n");
    }

    return 0;
}