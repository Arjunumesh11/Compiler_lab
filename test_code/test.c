#include<stdio.h>
int main()
{
    char *c;
    c=(char*)malloc(sizeof(char));
    c[0]='k';
    int a=c[0]-'a';
    printf("%d",a);
}
