#include<stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    if (x<100 && x>90)
    {
        printf("EXCELLENT");
    }
    if (x<90 && x>80)
    {
        printf("VERY GOOD");
    }
    if (x<80 && x>70)
    {
        printf("GOOD");
    }
    if (x<70 && x>60)
    {
        printf("CAN DO BETTER");
    }
    if (x<60 && x>50)
    {
        printf("AVERAGE");
    }
    if (x<50 && x>40)
    {
        printf("BELOW AVERAGE");
    }
    if (x<40 )
    {
        printf("FAIL");
    }
    return 0;
}