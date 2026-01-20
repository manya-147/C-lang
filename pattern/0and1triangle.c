#include<stdio.h>
int main(){
    int x,a;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {   if (i%2==0) a=0;
        else a=1;
       for (int  j= 1; j<=i; j++)
       {    printf("%d ",a); // if (i==j || (i+j)%2==0) printf("1");
         if (a==0) a=1;     // else printf("0");
         else a=0;
       }
       printf("\n");
        
    }
    
    return 0;
}