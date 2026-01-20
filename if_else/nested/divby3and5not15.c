#include<stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    if (x%3==0 || x%5==0)
    {
        if (x%15!=0)
        {
            printf("Divisible by 3 or 5 but not 15" );
        }
        else
        {
            printf("Divisible by 3 or 5 and 15");
        }   
    }
   else
   {
    printf("Not divisible by anything");
   }
   
    return 0;
}