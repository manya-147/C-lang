#include<stdio.h>
int main (){
    int x,a=0,b=0,c;        // n=even sum=(-n)/2
    printf("Enter x : ");   // n=odd sum=(2n-1)/2
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
       if (i%2==0) 
       {
        a=a+i;
       }
       if (i%2!=0)
       {
        b=b+i;
       }
    }
    c=b-a;
       printf("%d",c);
    
    return 0;
}