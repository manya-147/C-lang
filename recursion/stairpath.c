#include<stdio.h>
int stair(int n){
    int a,b,c;
    if(n==1) return 1 ;
    if(n==2) return 2 ;
    b= stair(n-1); 
    c= stair(n-2);
    a=b+c;
    return a;
}
int main(){
    int n,x;
    printf("Enter n : ");
    scanf("%d",&n);
    x = stair(n);
    printf("%d",x);
    return 0;
}