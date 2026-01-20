#include<stdio.h>
int main(){
    int x,nsp,nst;
    printf("Enter x : ");
    scanf("%d",&x);
    nsp=x/2;
    nst=1;
    int m=x/2+1;
    for (int i = 1; i <=x; i++)
    {  
        for (int j = 1; j <=nsp; j++)
        {
            printf("  ");   
        }
        for (int k = 1; k <=nst; k++)
        {
           printf("* ");
        }
        if (i<m)
        {
            nsp--;
        nst+=2;
        }
        else 
        {
            nsp++;
        nst-=2;
        }
        printf("\n");
    }
    
    return 0;
}