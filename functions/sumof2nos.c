#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int x,y,sum;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    sum=add(x,y);
    printf(" %d ",sum);
    return 0;
}