#include<stdio.h>
int main (){
    int x,a=1,b=1,c;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("%d %d ",a,b);
    for (int i = 0; i <x-2; i++)
    {
       c=a+b;
       printf("%d ", c);
       a=b;
       b=c;
    }
        return 0;
}