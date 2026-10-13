#include <stdio.h>

int main() {
    int amt, balance;
    printf("Balance = ");
    scanf("%d", &balance);
    printf("Amount = ");
    scanf("%d", &amt);
    
    if(amt > 0 && amt <= balance) {
        printf("True");
    }
    else {
        printf("False");
    }
}