#include<stdio.h>
int main(){
    int x,y;
    printf("Enter rows x : ");
    scanf("%d",&x);
    printf("Enter columns y : ");
    scanf("%d",&y);
    for (int i = 1; i <=x; i++)
    {
        for (int j  = 1; j <=y; j++)
        {
           if (i==1 || j==1 || x==i || y==j)
           {
            printf("* ");
           }
           else
           {
            printf("  ");
           }
           
        }
        printf("\n");
    }
    
    return 0;
}