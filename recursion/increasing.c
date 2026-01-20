#include<stdio.h>
void inc(int n,int x){
    
    if(n>x) return;
    printf("%d\n",n);
    inc(n+1,x);
    return;
}
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    inc(1,x);
    return 0;
}