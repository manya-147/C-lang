#include<stdio.h>
int main(){
    int x,a,s=0;
    printf("Enter x : ");
    scanf("%d",&x);
    while (x!=0)
    {   a=x%10;
        x=x/10;
        s=s+a;
    }
    printf("%d ",s);
    return 0;
}