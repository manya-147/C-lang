#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int  i = 1; i <=x; i++)
    {
       for (int j = 1; j <=x+1-i; j++)
       {
       printf("*");
       }
       printf("\n");
    }
    
    return 0;
}