#include<stdio.h>
int main(){
    int x;
    printf("Enter x :");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    { for (int k = 1; k<=i-1; k++)
    {
        printf("  ");
    }
    
        for (int j  = 1; j<=x-i+1; j++)
        {
           printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}