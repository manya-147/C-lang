#include<stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    { int a=1,y,b=i-1+64;
       for (int j  = 1; j <=x-i; j++)
       {
        printf("  ");
       }
       for (int k = 1; k <=i; k++)
       { y=a+64;
        char c =(char)y;
        printf("%c ",c);
        a++;
       }
       for (int l = 1; l <=i-1; l++)
       { 
        char d=(char)b;
        printf("%c ",d);
        b--;
       }
       printf("\n");
    }
    
    return 0;
}