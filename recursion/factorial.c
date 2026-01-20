#include<stdio.h>
int fact(int x){
    int fac;
    if(x==1 || x==0) return 1;
    fac=x*fact(x-1);
    return fac;
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    y=fact(x);
    printf("%d ",y);
    return 0;
}