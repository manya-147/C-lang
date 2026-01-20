#include<stdio.h>
int main (){
    int x,a=1,b=1,c;
    printf("Enter x : ");
    scanf("%d",&x);
    
    for (int i = 0; i <x-2; i++)
    {
       c=a+b;
       
       a=b;
       b=c;
    }
    printf("%d ", c);
    return 0;
}