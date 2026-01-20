#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);
    if (a+b>c && b+c>a && c+a>b)
    {
       printf("triangle is POSSIBLE");
    }
    else
    {
        printf("triangle is NOT POSSIBLE");
    }
    
    return 0;
}