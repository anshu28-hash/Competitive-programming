#include <stdio.h>

int add_int(int a, int b) {
    return a + b;
}

float add_float(float a, float b) {
    return a + b;
}

int main() {
    int i1, i2;
    float f1, f2;

    scanf("%d %d", &i1, &i2);

    scanf("%f %f", &f1, &f2);

    printf("\nInteger sum: %d\n", add_int(i1, i2));
    printf("Float sum: %.2f\n", add_float(f1, f2));

    return 0;
}