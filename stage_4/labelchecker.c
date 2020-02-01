#include<stdio.h>
#include<stdlib.h>
struct labeltable
{
    int address;
    char name[5];
};
void br(){};
int main()
{
    struct labeltable t[10];
    FILE *f;
    br();
    int i=0;
    f=fopen("label.dat","r");
    while(fread(&t[i],sizeof(struct labeltable),1,f))
    {
        printf("%d",t[i].address);
        printf("%s",t[i].name);
        i++;
    }
}