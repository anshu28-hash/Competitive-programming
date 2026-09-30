#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        if (n == 0) {
            printf("0\n");
            continue;
        }

        for (; n > 0; n /= 10) {
            printf("%lld", n % 10);
            if (n / 10 > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

}