#include<stdio.h>
void sum(int x,int a){
    if(x==0)
     {printf("%d\n",a);
    return;}
    
    sum(x-1,a+x);
    
    return ;
}
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    sum(x,0);
    return 0;
}