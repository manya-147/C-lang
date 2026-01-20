#include<stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i=i+2 )
    {
        printf("HELLO WORLD\n");
    }
    
    return 0;
}