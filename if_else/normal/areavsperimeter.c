#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("LENGTH : ");
    scanf("%d",&l);
    printf("BREADTH : ");
    scanf("%d",&b);
    p=2*(l+b);
    a=l*b;
    if (a>p)
    {
    printf("Area is greater : ");
    }
    if (p>a)
    {
    printf("Perimeter is greater"); 
    }
    if (a==p)
    {
    printf("Both are equal");
    }
    
    return 0;
}