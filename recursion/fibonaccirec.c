#include<stdio.h>
int fibo(int x){
    int a,b,c;
    if(x==1 || x==2) return 1;
    b = fibo(x-1);
    c=fibo(x-2);
    a=b+c;
    return a;
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    y= fibo(x);
    printf("%d",y);
    return 0;
}