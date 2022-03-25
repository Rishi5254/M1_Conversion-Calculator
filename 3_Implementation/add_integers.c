#include "stdio.h"

int main()
{
    int A=0 , B=0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &A, &B);

    int Sum = A + B;
    printf("Sum = %d", Sum);
    return 0;

}