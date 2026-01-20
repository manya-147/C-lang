#include<stdio.h>
int main(){
    int x,a,y;
    for (int  i = 1; i <=500; i++)
    {x=i;
        y=0;
        while (x!=0)
        {
        a=x%10;
        y=y+a*a*a;
            x=x/10;
        }
        if (y==i)
        {
           printf("%d ",i);
        }
        
    }
    return 0;
}