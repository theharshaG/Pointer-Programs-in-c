#include<stdio.h>

int main()
{
    int x=10;
    int *ptr;

    ptr=&x;

    *ptr=50;

    printf("x=%d",x);

    return 0;
}
