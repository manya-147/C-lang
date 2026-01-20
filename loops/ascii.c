#include<stdio.h>
int main(){
    for (int i = 65; i <=90; i++)
    {
       printf("%d - ",i);
       char a=(char)i;
       printf("%c\n",a);
    }
    for (int i = 97; i <=122; i++)
    {
       printf("%d - ",i);
       char a=(char)i;
       printf("%c\n",a);
    }
    
    return 0;
}