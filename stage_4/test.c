#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct whilecounter
{
    char name[5];
    struct whilecounter *prev;
};
int main()
{
    struct whilecounter *head,*temp;
    head = (struct whilecounter *)malloc(sizeof(struct whilecounter));
    strcpy(head->name,"l0");
    head->prev=NULL;
    temp=head;
    head = (struct whilecounter *)malloc(sizeof(struct whilecounter));
    strcpy(head->name,"l1");
    head->prev=temp;
    temp=head;
    printf("%s",head->prev->name);
    printf("%s",head->name);
}