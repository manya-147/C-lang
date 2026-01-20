#include<stdio.h>
int main(){
    int x,y;
    printf(" Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    for (int k = 1; k <=y; k++)
    { 
    for (int i = 1; i <=x; i++)
    {
       printf("*");
    }
printf("\n");}
    
    return 0;
}