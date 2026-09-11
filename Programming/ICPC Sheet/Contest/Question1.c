#include <stdio.h>

int main() {
    long long X, P;
    
    scanf("%lld %lld", &X, &P);
    
    float original_price = (P * 100.0) / (100.0 - X);
    
    printf("%.2f\n", original_price);
    
}