// Interchange values of two variables

#include <stdio.h>

int main()
{
    // Initialising variables
    int a, b, tmp;

    // Taking inputs
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    // Printing initial values
    printf("Initially: (%d, %d)\n", a, b);

    // Swapping the numbers with a temporary variable.
    tmp = a;
    a = b;
    b = tmp;

    // Printing the output post swapping
    printf("After swapping: (%d, %d)\n", a, b);
    return 0;
}