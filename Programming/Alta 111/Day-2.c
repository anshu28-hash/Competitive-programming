#include <stdio.h>

int main()
{
    long long A, B, temp;
    scanf("%lld %lld", &A, &B);
    temp = A;
    A = B;
    B = temp;
    printf("A = %lld B = %lld", A, B);
}