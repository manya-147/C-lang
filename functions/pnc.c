#include<stdio.h>

int fact(int a){
    int b=1;
    for (int i = 1; i <=a; i++)
    {
       b=b*i;
    }
    return b;
}
int main(){
    int n,r,p,c,nf,rf,nrf;
    printf("Enter n : ");
    scanf("%d",&n);
     printf("Enter r : ");
    scanf("%d",&r);
    nf=fact(n);
    rf=fact(r);
    nrf=fact(n-r);
    p=nf/(rf*nrf);
    c=nf/nrf;
    printf("%d %d",p,c);
    return 0;
}