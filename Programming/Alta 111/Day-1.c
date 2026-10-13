#include <stdio.h>

int main()
{
    int Days;
    scanf("%d", &Days);
    int age = Days / 365;
    int rem1 = age * 365;
    int rem2 = Days - rem1;
    printf("Person is lived for %d Years", age);
    printf(" and %d Days\n", rem2);
}