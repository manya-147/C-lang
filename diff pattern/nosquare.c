#include<stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int  i = 1; i <=2*x-1; i++)
    { 
        for (int j = 1; j <=2*x-1; j++)
        {  int a=i,b=j,min=0; 
            if (i>x)
                a=2*x-i;
            if (j>x)
             b=2*x-j;
            
            if (a>b)
                min=b;
            else min=a;
            
            printf("%d ",min);
    } printf("\n");
}
    return 0;
}