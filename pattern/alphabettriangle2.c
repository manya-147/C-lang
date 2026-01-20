#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    { int a=1;
       for (int j = 1; j <=x-i; j++)
       {
        printf("  ");
       }
       for (int k = 1; k <=i; k++)
       {  y=a+64;
        char c=(char)y;
        printf("%c ",c);
        a++;
       }

       printf("\n");
    }
    
    return 0;
}