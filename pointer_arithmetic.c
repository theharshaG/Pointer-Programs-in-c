#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    int *ptr=arr;

    printf("Address = %p\n",ptr);

    ptr++;

    printf("New Address = %p\n",ptr);

    printf("Value = %d\n",*ptr);

    return 0;
}
