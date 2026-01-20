#include<stdio.h>
int main (){
    int x,a=3;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
       printf("%d\n",a);
       a=a*4;
    }
    
    return 0;
}