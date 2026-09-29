#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    if (n <= 1) {
        printf("NO\n");
    }
    int Prime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            Prime = 0;
            break; 
        }
    }
    if (Prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}