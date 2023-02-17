#include <stdio.h>
#include <math.h>
// WAP to input x1 y1 and x2 y2 and find distance between these two points
void main() {
    int x1, y1, x2, y2;
    printf("Enter value of x1: ");
    scanf("%d", &x1);
    printf("Enter value of y1: ");
    scanf("%d", &y1);
    printf("Enter value of x2: ");
    scanf("%d", &x2);
    printf("Enter value of y2: ");
    scanf("%d", &y2);
    double ans = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    printf("Distance between the two points: %.*lf.\n", 3, ans);
}