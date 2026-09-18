#include <stdio.h>

int main() {
    int a, b;
    char s;
    scanf("%d %d %c", &a, &b, &s);
    switch (s) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d", a / b);
            } else {
                printf("Invaild Input");
            }
            break;
        
        }
    
}