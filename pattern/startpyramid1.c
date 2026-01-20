#include<stdio.h>
int main(){
    int x,nsp,nst,m;
    printf("Enter x :");
    scanf("%d",&x);
    nst=x;
    nsp=1;
    m=2*x+1;
    for (int i = 1; i <=m; i++)
    {
        printf("* ");
       
    }
    printf("\n");
    for (int i = 1; i <=x; i++)
     {
          for (int l  = 1; l<=nst; l++)
        {
           printf("* ");
        }
        for (int k = 1; k<=nsp; k++)
    {
        printf("  ");
    }
    
        for (int j  = 1; j<=nst; j++)
        {
           printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    return 0;
}