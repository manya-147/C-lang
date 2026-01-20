#include<stdio.h>
int main(){
    int x,a=100;
    printf("Enter x : ");
    scanf("%d",&x);
    // for (int i = 1; i <=x; i++)
    // {

    //    printf("%d\n",i);
    // }
    
    for (int i = 1; i <=x; i++)
    { 
        printf("%d\n",a);
        a=a-3;
    }
    
    return 0;
}