#include <stdio.h>

int main() {
    float wt;
    float ht;
    scanf("%f %f", &wt, &ht);
    float BMI = wt / (ht * ht);
    printf("BMI: %.2f\n", BMI);
    if (BMI < 18.5) {
        printf("Underweight\n");
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("Normal\n");
    } else if (BMI >= 25.0 && BMI <= 29.9) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

}