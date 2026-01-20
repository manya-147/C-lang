#include<stdio.h>
int main(){
    int x,y,a=1;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    for (int i = 1; i <=y; i++)
    {
        a=a*x;
        
    }
    printf("%d",a);
    return 0;
}