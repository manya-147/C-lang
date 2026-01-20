#include <stdio.h>
int main(){
    int x ,nsp,nst;
    printf("Enter x : ");
    scanf("%d",&x);
    nst=x;
    nsp=1;
    for (int i = 1; i <=2*x+1; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for (int i = 1; i <=x; i++)
    { int a=1;
       for (int j =1; j <=nst; j++)
       {
        printf("%d ",a);
       a++;
       }
       for (int k  = 1; k <=nsp; k++)
       {
        printf("  "); a++;
       }
       for (int j =1; j <=nst; j++)
       {
        printf("%d ",a);
        a++;
       }
       nsp+=2;
       nst--;
       printf("\n");
    }
    
    return 0;
}