#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define a "a"
int main(int argc, char **argv)
{
    char *s;
    s = strdup(a);
    printf("%s", s);
}