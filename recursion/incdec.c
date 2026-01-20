#include<stdio.h>
void inc(int x){
    if(x==0) return;
    inc(x-1);
    printf("%d\n",x);
    return;
}
void dec(int x){
    if(x==0) return;
    printf("%d\n",x);
    dec(x-1);
    return;
}
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    dec(x);
    inc (x);
    return 0;
}