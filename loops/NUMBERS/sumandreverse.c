#include<stdio.h>
int main(){
    int x,a=0,b;
    printf("Enter x : ");
    scanf("%d",&x);
    while (x!=0)
    { a=a+(x%10);
        b=x%10;
       x=x/10;
    printf("%d",b);
    } 
    printf("\n%d ",a);
    return 0;
}