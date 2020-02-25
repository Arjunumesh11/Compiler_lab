#include <stdio.h>
int c = 10;
int func()
{
    return c++;
}
int fu()
{
    return c++;
}
int pri()
{
    printf("%d", c);
}