#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int  i = 1; i <=x; i++)
    {
       for (int  j = 1; j <=2*i-1; j=j+2)
       {
        // y=1+2*(j-1); printf("%d",y);
        printf("%d",j);
       }
        printf("\n");
    }
    return 0;
}