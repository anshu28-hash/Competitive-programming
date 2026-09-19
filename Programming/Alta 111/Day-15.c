#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int Prime = 1; 
    if (num <= 1) {
        Prime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
    }
    if (Prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
}