#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *r, *e;
    r = (int *)malloc(sizeof(int) * 10);
    e = (int *)malloc(sizeof(int) * 10);
    r[0] = 1;
    memcpy(e, r, sizeof(int) * 10);
    r[0] = 2;
    printf("%d", e[0]);
    e[0] = 2;
    printf("%d", r[0]);
}