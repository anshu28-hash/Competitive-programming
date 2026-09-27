#include <stdio.h>

void divide(int dividend, int divisor, int *quotient, int *remainder) {
    *quotient = dividend / divisor;  
    *remainder = dividend % divisor;
}

int main() {
    int num1;
    int num2;
    int q, r;
    scanf("%d %d",&num1,&num2);

    divide(num1, num2, &q, &r);

    printf("Quotient: %d\n", q);
    printf("Remainder: %d\n", r);

    return 0;
}