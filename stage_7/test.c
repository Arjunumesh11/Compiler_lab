#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int var = 15;
void func(int *p)
{
    p = &b;
    printf("inside : %d adress %d\n", *p, p);
}
int main()
{
    int b = 100, *ptr = &b;
    func(ptr);
    printf("%d %d ", *ptr, ptr);
}
