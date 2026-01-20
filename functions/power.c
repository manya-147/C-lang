#include<stdio.h>
#include<math.h>
int main(){
    int p,x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    p=pow(x,y);
    printf("\n%d ",p);
    return 0;
}