#include <stdio.h>
void modifyByValue(int num) {
    num = 100;
}
void modifyByPointer(int *num) {
    *num = 100;
}

int main() {
    int a = 10;
    int b = 10;

    modifyByValue(a);
    printf("After modifyByValue: %d\n", a);     

    modifyByPointer(&b);
    printf("After modifyByPointer: %d\n", b);   

}