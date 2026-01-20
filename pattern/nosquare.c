#include<stdio.h>
int main(){
    int x,y;
    printf("ENTER Y : ");
    scanf("%d",&y);
    for (int  i = 1; i <=y; i++)
    {
       for (int i = 1; i <=y; i++)
       {
        printf("%d ",i);
       }
       printf("\n");
    }
    
    return 0;
}