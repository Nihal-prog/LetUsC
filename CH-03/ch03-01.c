// Cost Price and Selling price as input
// Using conditionals, decide if profit or loss, and how much

#include <stdio.h>

int main()
{
    // Initialising variables
    float cp, sp;

    // Taking inputs
    printf("Enter the cost price\n");
    scanf("%f", &cp);
    printf("Enter the selling price\n");
    scanf("%f", &sp);

    // Using conditionals and printing the output
    if (sp > cp)
    {
        printf("Profit\n");
        printf("Amount: %.2f\n", sp - cp);
    }
    else
    {
        printf("Loss\n");
        printf("Amount: %.2f\n", cp - sp);
    }

    return 0;
}