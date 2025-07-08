// Distance between two coordinates on Earth in nautical miles.

#include <stdio.h>
#include <math.h>

// Defining PI
#define PI 3.1415

int main()
{
    // Initialising variables
    float L1_deg, G1_deg, L2_deg, G2_deg;
    double L1, G1, L2, G2, D;

    // Taking Latitude and Longitude of the two places as input
    printf("Enter Latitude 1: ");
    scanf("%f", &L1_deg);
    printf("Enter Longitude 1: ");
    scanf("%f", &G1_deg);
    printf("Enter Latitude 2: ");
    scanf("%f", &L2_deg);
    printf("Enter Longitude 2: ");
    scanf("%f", &G2_deg);

    // Converting degrees to radian
    L1 = L1_deg * (PI / 180.0);
    G1 = G1_deg * (PI / 180.0);
    L2 = L2_deg * (PI / 180.0);
    G2 = G2_deg * (PI / 180.0);

    // Calculating the distance with the formula
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    // Printing the output
    printf("Distance: %.3f Nautical Miles\n", D);
    return 0;
}