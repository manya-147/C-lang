#include<stdio.h>
int fact(int x){
    int fact=1;
    for (int i = 1; i <=x; i++)
    {
       fact=fact*i;
    }
    
    return fact;
}
int main(){
    int x,fac;
    printf("Enter x : ");
    scanf("%d",&x);
    fac= fact(x);
    printf("%d",fac);
    return 0;
}