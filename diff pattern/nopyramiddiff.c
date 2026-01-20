#include<stdio.h>
int main(){
    int x,nsp,nst;
    printf("Enter x : ");
    scanf("%d",&x);
    nst=x;
    nsp=1;
    int a=1;
    for (int i = 1; i <=2*x+1; i++)
    { printf("%d ",a);
      
       if (i<x+1)
         a++;
       else
        a--;
    }
    printf("\n");
    for (int i = 1; i <=x; i++)
    { int b=1;
       for (int j = 1; j <=nst; j++)
       {
        printf("%d ",b);
        b++;
       }
       for (int k = 1; k <=nsp; k++)
       {
        printf("  ");
        b--;
       }
       
       for (int j = 1; j <=nst; j++)
       {
        printf("%d ",b);
        b--;
       }
       nsp+=2;
       nst--;
       printf("\n");
    }
    return 0;
}