#include<stdio.h>
int min(int a, int b){
    if (a>b)
    return a;
    else return b;
}
int hcf(int a,int b){
    int hcf;
    for (int i = 1; i <= min(a,b); i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
        
    }
    return hcf;
}
int main(){
    int x,y,hc;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    hc=hcf(x,y);
    printf("%d",hc);
    return 0;
}