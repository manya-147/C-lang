#include<stdio.h>
void inc(int x){
     if(x==0) return;
     inc(x-1);
    printf("%d\n",x);
    
   return;
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    inc(x);
    return 0;
}