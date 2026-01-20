#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("Value of a and b are : ");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Quotient is : %d\n",c);
    x=a%b;// x=a-(b*c);
    printf("Remainder is : %d",x);
    return 0;
}