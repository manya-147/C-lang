#include<stdio.h>
int main(){
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    if (x>99 && x<1000)
    {
    printf("It is 3 digit no");
    }
    else
    {
        printf("It isnt 3 digit no");
    }
    
    return 0;
}