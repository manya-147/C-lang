#include<stdio.h>
void dec(int x){
     if(x==0) return;
    printf("%d\n",x);
    dec(x-1);
   return;
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    dec(x);
    return 0;
}