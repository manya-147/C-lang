#include<stdio.h>
int main(){
    int x,a=1;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
        printf("%d\n",a);
        a=a*2;
    }
    
    return 0;
}