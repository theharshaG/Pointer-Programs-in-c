#include<stdio.h>

int main()
{
    int num1,num2,sum,largest;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    int *ptr1=&num1;
    int *ptr2=&num2;

    sum=*ptr1+*ptr2;

    if(*ptr1>*ptr2)
        largest=*ptr1;
    else
        largest=*ptr2;

    printf("\nSum = %d",sum);
    printf("\nLargest = %d",largest);

    return 0;
}
