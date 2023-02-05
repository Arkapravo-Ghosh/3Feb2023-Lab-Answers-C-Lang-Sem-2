#include<stdio.h>
#include<math.h>
/*Write program, which reads a, b, and c. Let  x2 + y2 + ax + by + c = 0 be equation of a circle. Print its center and radius. 
Input 10, -6 and -2 then output is center (-5,3) and radius 6. */
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int g=-(a/2);
    int f=-(b/2);
    printf("%d %d\n",g,f);
    printf("%f",sqrt((g*g)+(f*f)-c));
    return 0;
}