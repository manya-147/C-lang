#include<stdio.h>
void pip(int x){
    if(x==0) return ;
    printf("Pre %d\n",x);
    pip(x-1);
    printf("In %d\n",x);
    pip(x-1);
    printf("Post %d\n",x);
    return;

}
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    pip(x);
    return 0;
}