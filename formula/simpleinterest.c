#include<stdio.h>
int main(){
    float p,r,t,z;
    printf("value of p is ");
    scanf("%f",&p);// p=800.9;
    printf("value of r is ");
    scanf("%f",&r);//r=4;
     printf("value of t is ");
    scanf("%f",&t);//t=5;
   
    z=(p*r*t)/100;
    printf("Simple interest is %f",z);
    return 0;
}