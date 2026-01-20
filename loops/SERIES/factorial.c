#include<stdio.h>
int main (){
    int x,a=1;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
       a=a*i;  
    }
    printf("%d",a);
    return 0;
}