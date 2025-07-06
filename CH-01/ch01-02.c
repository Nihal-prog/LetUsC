#include <stdio.h>

int main()
{
    float kms, meters, cms, inches, feet, acre;
    printf("Enter the distance in kms: ");
    scanf("%f", &kms);
    meters = kms * 1000;
    cms = meters * 100;
    inches = cms / 2.54;
    feet = inches / 12;
    acre = kms * 247.1;
    printf("Kilometers: %fkm\n", kms);
    printf("Meters: %fm\n", meters);
    printf("Centimeters: %fcms\n", cms);
    printf("Inches: %finches\n", inches);
    printf("Feet: %ffeet\n", feet);
    printf("Acre: %facre\n", acre);
    return 0;
}