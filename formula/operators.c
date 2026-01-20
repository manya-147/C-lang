#include<stdio.h>
int main(){
    float x,y,a,b,c,d;
    printf("Enter x : ");
    scanf("%f",&x);
    printf("Enter y : ");
    scanf("%f",&y);
    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;
    printf("SUM is : %f\n",a);
    printf("SUBTRACTION is : %f\n",b);
    printf("MULTIPY is : %f\n",c);
    printf("DIVISION is : %f\n",d);
    return 0;
}