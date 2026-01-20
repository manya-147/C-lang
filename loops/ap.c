#include<stdio.h>
int main(){
    int x,a=4;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 4; i <=3*x+1; i=i+3)
    {
        printf("%d\n",i);
    }
    // for (int i = 1; i <= x; i++)        without formula
    // {
    //     printf("%d\n",a);
    //     a=a+3;
    // }
    
    return 0;
}