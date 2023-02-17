#include<stdio.h>
#include<math.h>
/*Write program, which reads a, b, and c. Let  x2 + y2 + 2ax + 2by + c = 0 be equation of a circle. 
Print its center and radius. Input 10, 6 and 2 then output is center (10,6) and radius 11.7.*/
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d",(-1)*(a),(-1)*(b));
    printf("\n");
    printf("%f",sqrt((a*a)+(b*b)-c));
    return 0;
}