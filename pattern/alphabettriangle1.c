#include<stdio.h>
int main(){
    int x,a;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {int d=1;
        for (int j = 1; j <=i; j++)
        { a=d+64;
            char ch= (char)a;
            printf("%c",ch);
            d++;
            
        }
        printf("\n");
    }
    
    return 0;
}