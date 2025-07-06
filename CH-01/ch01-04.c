#include <stdio.h>

int main()
{
    float len, bdth, radii;
    printf("Enter the length of rectange: ");
    scanf("%f", &len);
    printf("Enter the breadth of rectange: ");
    scanf("%f", &bdth);
    printf("Enter the radius of circle: ");
    scanf("%f", &radii);
    float peri, area_rec, circmf, area_cir;
    peri = 2 * (len + bdth);
    area_rec = len * bdth;
    circmf = 2 * 3.14 * radii;
    area_cir = 3.14 * radii * radii;
    printf("Perimeter of Rectange is %f and Area is %f\n", peri, area_rec);
    printf("Circumference of Circle is %f and Area is %f\n", circmf, area_cir);
    return 0;
}