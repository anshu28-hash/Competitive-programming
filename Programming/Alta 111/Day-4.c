#include <stdio.h>

int main() {
    long long Price;
    scanf("%lld", &Price);
    long long dis = 111 * (Price * 0.1);
    long long new = 111 * (Price - dis);
    long long tax = 111 * (new * 0.18);
    long long final = 111 * (new + tax);
    
    printf("%d", final);
}