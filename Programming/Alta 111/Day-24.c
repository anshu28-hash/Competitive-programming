#include <stdio.h>
#include <stdbool.h>

void addTwoNumbers(void);
void calculateFactorial(void);
void checkPrime(void);
void findLargest(void);

int main() {
    int choice;

    printf("\n=== CAPSTONE MENU ===\n");
    printf("1. Sum of two numbers\n");
    printf("2. Factorial of a number\n");
    printf("3. Check if a number is prime\n");
    printf("4. Find the largest of three numbers\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addTwoNumbers();
            break;
        case 2:
            calculateFactorial();
            break;
        case 3:
            checkPrime();
            break;
        case 4:
            findLargest();
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}

void addTwoNumbers(void) {
    double a, b;
    printf("\n--- Sum of Two Numbers ---\n");
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
}

void calculateFactorial(void) {
    int n;
    unsigned long long fact = 1;
    printf("\n--- Factorial Calculation ---\n");
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Result: %d! = %llu\n", n, fact);
}

void checkPrime(void) {
    int n;
    bool isPrime = true;
    printf("\n--- Prime Number Check ---\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Result: %d is a PRIME number.\n", n);
    } else {
        printf("Result: %d is NOT a prime number.\n", n);
    }
}

void findLargest(void) {
    double a, b, c;
    printf("\n--- Largest of Three Numbers ---\n");
    printf("Enter three numbers space-separated: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Result: The largest number is %.2lf\n", max);
}