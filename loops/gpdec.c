#include<stdio.h>
int main (){
    float x,a=100;
    printf("Enter x : ");
    scanf("%f",&x);
    for (int i = 1; i <=x; i++)
    {
        printf("%f \n",a);
        a=a/2;
    }
    
    return 0;
}