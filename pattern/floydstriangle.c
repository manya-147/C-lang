#include<stdio.h>
int main(){
    int x , a=1;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
       for (int j  = 1; j <=i; j++)
       { 
       printf("%d ",a);
        a++;
       }
       printf("\n");
    }
    
    return 0;
}