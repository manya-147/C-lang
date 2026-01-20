#include<stdio.h>
int sum(int x){
    int s;
    if(x==0) return s;
    s=x+sum(x-1);
    return s ;
}
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    int y= sum(x);
    printf("%d",y);
    return 0;
}