#include<stdio.h>
int alo(char *a)
{
    return a-'a';
}
int main()
{
    char *c;
    c=(char*)malloc(sizeof(char));
    c='k';
    int a=alo(c);
    printf("%d",a);
}
