#include<stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 0; i <=x; i=i+2)
    {
        printf("%d\n",i);
    }
    
    return 0;
}