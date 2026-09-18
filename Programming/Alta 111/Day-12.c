#include <stdio.h>

int main() {
    int m;

    printf("Enter month number:");
    scanf("%d", &m);
    switch (m) {
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;

        case 3:
        case 4:
        case 5:
            printf("Summer\n");
            break;

        case 6:
        case 7:
        case 8:
        case 9:
            printf("Monsoon\n");
            break;

        case 10:
        case 11:
            printf("Autumn\n");
            break;
    }
}