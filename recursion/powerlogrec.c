#include<stdio.h>
int power(int x,int y){
    int a,b;
    if(y==0) return 1;
    b=power(x,y/2);
    if(y%2==0 )a=b*b;
    else a=b*b*x;
    return a;
}
int main(){
    int x,y,z;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    z=power(x,y);
    printf("%d",z);
    return 0;
}