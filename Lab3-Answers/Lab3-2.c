#include <stdio.h>
#include <math.h>
// WAP to find cos inverse x
void main() {
    double cos;
    printf("Enter Value of cos: ");
    scanf("%lf", &cos);
    printf("Cos inverse of %lf is %.*lf.\n", cos, 3, acos(cos) / acos(-1) * 180);
}