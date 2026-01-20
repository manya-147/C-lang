#include<stdio.h>
int main (){
    int x,a=0;
    printf("Enter x : ");
    scanf("%d",&x);
    for (int i = 2; i <=x-1; i++)
    {
       if (x%i==0)
       {a=1;
        break;} 
    }
    if (x==1)
    printf("neither prime nor composite ");
     else if (a==0)
         printf("prime");
    else
         printf("composite");
    
    return 0;
}