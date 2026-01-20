#include<stdio.h>
int main(){
    int cp,sp,a;
    printf("Enter SP : ");
    scanf("%d",&sp);
    printf("Enter CP : ");
    scanf("%d",&cp);
    if (cp>sp)
    {
    printf("LOSS");
    }
    if (cp<sp)
    {
    printf("PROFIT");
    }    
    if (cp==sp)
    {
        printf("NOTHING");
    }
    a=sp-cp;
       printf("\n%d",a) ;
    return 0;
}