#include<stdio.h>
int main(){
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    if (x%4==0)
    {
    printf("It is leap year");
    }
    else
    {
        printf("it isnt leap year");
    }
        
    return 0;
}