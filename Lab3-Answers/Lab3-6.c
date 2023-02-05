#include <stdio.h>
#include <math.h>
// WAP which reads a b c d e and prints the distance between point a b and line cx + dy + e = 0
void main() {
    double a, b, c, d, e;
    printf("Enter value of a: ");
    scanf("%lf", &a);
    printf("Enter value of b: ");
    scanf("%lf", &b);
    printf("Enter value of c: ");
    scanf("%lf", &c);
    printf("Enter value of d: ");
    scanf("%lf", &d);
    printf("Enter value of e: ");
    scanf("%lf", &e);
    double f = (a * c + b * d + e) / sqrt(pow(c, 2) + pow(d, 2));
    printf("Distance: %.3lf\n", f);
}