#include<stdio.h>
#include<math.h>
#define pi 3.14
/*11.	Write program, which reads a, b and c as sides of a triangle and prints the angle A in degree. Hint: a2 = b2 +  c2 – 2bcCOS(A)*/
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float ans=acos((-1)*(float)((a*a)-(b*b)-(c*c))/(float)(2*b*c));
    printf("%f",ans*180/pi);
    return 0;
}