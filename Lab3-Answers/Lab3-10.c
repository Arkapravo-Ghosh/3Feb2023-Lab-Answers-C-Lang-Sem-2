#include<stdio.h>
#include<math.h>
/*Write program, which reads a, b, and c. Let  x2 + y2 + ax + by + c = 0 be equation of a circle. 
Print its center and radius. Input 10, -6 and -2 then output is center (-5,3) and radius 6. */
int main(){
    int a,b,c,p,q,r;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&p,&q,&r);
    float y=((a*r)-(p*c))/((b*p)-(q*a));
    float x=(-c-(b*y))/a;
    printf("%f %f",x,y);
    return 0;
}