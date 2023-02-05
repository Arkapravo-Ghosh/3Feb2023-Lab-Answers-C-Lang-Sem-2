#include <stdio.h>
#include <math.h>
// WAP to find the cos of an angle (Angle is in radian)
void main() {
    double angle;
    printf("Enter Angle in Radian: ");
    scanf("%lf", &angle);
    printf("Cos of %lf is %.*lf.\n", angle, 3, cos(angle));
}