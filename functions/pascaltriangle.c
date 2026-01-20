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
    int n,r,ncr;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    for (int i  = 0; i <=n; i++)
    {
        for (int k = 0; k <=n-i; k++)
        {
           printf(" ");
        }
        
        for (int j = 0; j <=i; j++)
        {
            ncr=fact(i)/(fact(j)*fact(i-j));
           printf(" %d",ncr);
        } 
         printf("\n");
    }
    // for (int  i = 0; i <=n; i++)
    // {
    //    int first =1;
    //    for (int j  = 0; j<=i; j++)
    //    {
    //    printf(" %d ",first);
    //    first=first*(i-j)/(j+1);
    //    }
    //    printf("\n");
    // }
    
    return 0;
}