#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    printf("Enter z : ");
    scanf("%d",&z);
    if (x>y && x>z)
    {
        printf("%d",x);
    }
    if (y>x && y>z)
    {
        printf("%d",y);
    }
    if (z>y && x<z)
    {
        printf("%d",z);
    }
    
    return 0;
}