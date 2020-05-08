#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct name
{
    char *first;
};
int main()
{
    struct name *a, *b;
    char n[10] = "sdf";
    a = (struct name *)malloc(sizeof(struct name));
    b = (struct name *)malloc(sizeof(struct name));
    memcpy(b, a, sizeof(struct name));
    a->first = n;

    printf("%s", a->first);
    printf("%s", b->first);
}