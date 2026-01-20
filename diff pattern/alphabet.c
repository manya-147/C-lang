#include <stdio.h>
int main(){
    int x ,nsp,nst,a=1;
    printf("Enter x :");
    scanf("%d",&x);
    nst=x;
    nsp=1;
    for (int i = 1; i <=2*x+1; i++)
    { int y=a+64;
        char c=(char)y;
       printf("%c ",c);
       a++;
    }
    printf("\n");
    for (int  i = 1; i <=x; i++)
    { int b=1;
       for (int j = 1; j <=nst; j++)
       {
        int y=b+64;
        char c=(char)y;
       printf("%c ",c);
       b++;
       }
       for (int k = 1; k <=nsp; k++)
       {
       printf("  ");
       b++;
       }
       
       for (int j = 1; j <=nst; j++)
       {
        int y=b+64;
        char c=(char)y;
       printf("%c ",c);
       b++;
       }
       nsp+=2;
    nst--;
    printf("\n");
    }
        return 0;
}