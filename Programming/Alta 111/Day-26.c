#include <stdio.h>

int main() {
    int array[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    int read_idx, change_idx, change_to;
    scanf("%d", &read_idx);
    scanf("%d %d", &change_idx, &change_to);
    array[change_idx] = change_to;
    printf("Read : %d\n", array[read_idx]);
    printf("Updated array:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}