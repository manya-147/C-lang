#include<stdio.h>
int stair(int x){
    int a,b,c,d;
    if(x==1) return 1;
    if(x==2) return 3;
    if(x==3) return 3;
    b= stair(x-1);
    c= stair(x-2);
    d= stair(x-3);
    a=b+c+d;
    return a;
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    y=stair(x);
    printf("%d",y);
    return 0;
}