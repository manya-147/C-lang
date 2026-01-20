#include<stdio.h>
int fibo(int a){
    int b=1,c=1,d;
    printf("%d %d ",b,c);
    for (int i = 0; i < a-2; i++)
    {
        d=b+c;
        printf("%d ",d);
        b=c;
        c=d;
    }
    
    return d;
}
int main(){
    int x,fib;
    printf("Enter x : ");
    scanf("%d",&x);
    fib=fibo(x);
    printf("%d",fib);
    return 0;
}