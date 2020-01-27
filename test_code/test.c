#include<stdio.h>
#include<string.h>
struct label{
    int address;
    int name[5];
};
int main()
{
    int n;
    char name[5];
    char n1[5];
    sprintf(name,"l%d",3);
    printf("%s",name);
    strcpy(n1,name);
   // strcpy(name,NULL);
    printf("%s",n1);

}