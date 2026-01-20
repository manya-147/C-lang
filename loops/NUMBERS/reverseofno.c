#include<stdio.h>
int main(){
    int x,a=0;
    printf("Enter x : ");
    scanf("%d",&x);
    while (x!=0)
    {
        a=x%10;
       x=x/10;
    printf("%d",a);
    } 
    
    return 0;
}