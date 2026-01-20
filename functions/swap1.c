#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return ;
}
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
     swap(&a,&b);
    printf("The nos a and b are %d and %d after swap",a,b);
    return 0;
}