#include <stdio.h>

int main() {
    int num, org, rev = 0, rem;
    scanf("%d", &num);
    org = num;
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (org == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
}