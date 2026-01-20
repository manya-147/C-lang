#include<stdio.h>
int main(){
    int x,y;
    printf("enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    { int a=1;
       for (int j= 1; j <=i; j++)
       {
       if (i%2!=0)
       {
        printf("%d",j);
       }
       else if (i%2==0)
       {
        y=a+64;
        char c=(char)y;
        printf("%c",c);
        a++;
       }
       
       
       }
       printf("\n");
    }
    
    return 0;
}