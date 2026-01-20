#include<stdio.h>
int  power(int x,int y){
    int c;
    if(y==0) return 1;
    c=x*power(x,y-1);
    return c;
}
int main(){
    int x,y,z;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    z = power(x,y);
    printf("%d\n",z);
    return 0;
}