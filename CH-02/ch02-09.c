/* Given a total amount N, break it into the smallest number of currency notes using
These denominations: 1, 2, 5, 10, 50, 100
We always give the highest denomination first

E.g: N = 137
using 1x100 = 37 remaining
using 0x50 = stil 37
using 3x10 = 7 remaining
using 1x5 = 2 remaining
using 1x2 = 0 remaining
using 1x0 */

#include <stdio.h>

int main()
{
    // Initialising variables
    int n, hundred, fifty, ten, five, two, one;

    // Taking inputs
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Dividing indivisually
    hundred = n / 100;
    n = n % 100;
    fifty = n / 50;
    n = n % 50;
    ten = n / 10;
    n = n % 10;
    five = n / 5;
    n = n % 5;
    two = n / 2;
    n = n % 2;
    one = n / 1;
    n = n % 1;

    // Printing number of notes used
    printf("100: %d\n", hundred);
    printf("50: %d\n", fifty);
    printf("10: %d\n", ten);
    printf("5: %d\n", five);
    printf("2: %d\n", two);
    printf("1: %d\n", one);
    return 0;
}

// ---END OF CHAPTER 2---