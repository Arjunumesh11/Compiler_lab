#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct name{
    char *ant;
};
struct namelist
{
    struct name *val;
    struct namelisl *next;
    
};
int main()
{
    struct name *a,*b;
    struct namelist *ptr,*temp;
    
    a=(struct name*)malloc(sizeof(struct name));
    a->ant=strdup("asf");
    ptr=(struct namelist*)malloc(sizeof(struct namelist));
    ptr->val=a;
    b=(struct name*)malloc(sizeof(struct name));
    b->ant=strdup("efg");
    temp=(struct namelist*)malloc(sizeof(struct namelist));
    temp->next=ptr;
    temp->val=b;
    ptr=temp;
    printf("%s",ptr->val->ant);
    ptr=ptr->next;
    printf("%s",ptr->val->ant);
    
}