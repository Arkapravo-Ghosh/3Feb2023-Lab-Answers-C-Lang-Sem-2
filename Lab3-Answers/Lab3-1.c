#include <stdio.h>
#include <math.h>
// Area of a triangle using 3 sides and perimeter
void main() {
    int a, b, c;
    printf("Enter length of first side: ");
    scanf("%d", &a);
    printf("Enter length of second side: ");
    scanf("%d", &b);
    printf("Enter length of third side: ");
    scanf("%d", &c);
    printf("Perimeter: %d\n", a + b + c);
    int s = (a + b + c) / 2;
    printf("Area: %.*lf\n", 3, sqrt(s * (s - a) * (s - b) * (s - c)));
}