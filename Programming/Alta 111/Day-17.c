#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N); 
    long long f = 0, sec = 1, nxt;
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%lld ", f);
            continue;
        }
        if (i == 2) {
            printf("%lld ", sec);
            continue;
        }
        nxt = f + sec;
        f = sec;
        sec = nxt;
        printf("%lld ", nxt);
    }
    printf("\n");

}