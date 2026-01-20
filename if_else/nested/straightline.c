#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,a,b;
    printf("Enter x1 : ");
    scanf("%d",&x1);
    printf("Enter x2 : ");
    scanf("%d",&x2);
    printf("Enter x3 : ");
    scanf("%d",&x3);
    printf("Enter y1 : ");
    scanf("%d",&y1);
    printf("Enter y2 : ");
    scanf("%d",&y2);
    printf("Enter y3 : ");
    scanf("%d",&y3);
    a=(y2-y1)/(x2-x1);
    b=(y3-y2)/(x3-x2);
    if (a==b)
    {
        printf("SAME");
    }
    else
    {
        printf("DIFFERENT");
    }
    return 0;
}