#include <stdio.h>
#include <math.h>
// p q r s t u, output: area of triangle whose end points are p q, rs and tu
void main() {
    int p, q, r, s, t, u;
    printf("Enter value of p: ");
    scanf("%d", &p);
    printf("Enter value of q: ");
    scanf("%d", &q);
    printf("Enter value of r: ");
    scanf("%d", &r);
    printf("Enter value of s: ");
    scanf("%d", &s);
    printf("Enter value of t: ");
    scanf("%d", &t);
    printf("Enter value of u: ");
    scanf("%d", &u);
    double pqrs = sqrt(pow((p - r), 2) + pow((q - s), 2));
    double rstu = sqrt(pow((r - t), 2) + pow((s - u), 2));
    double tupq = sqrt(pow((t - p), 2) + pow((u - q), 2));
    double se = (pqrs + rstu + tupq) / 2;
    printf("Area: %.*lf\n", 3, sqrt(se * (se - pqrs) * (se - rstu) * (se - tupq)));
}
=======
#include<stdio.h>
#include<math.h>
//Calculate the slope of a line
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%f",(-1)*((float)a/(float)b));
    return 0;
}