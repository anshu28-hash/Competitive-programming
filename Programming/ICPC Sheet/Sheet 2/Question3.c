#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int max = 0;
    while(N>0){
        int x;
        scanf("%d",&x);
        if(x > max){
            max = x;
        }

        N--;
    }

    printf("%d",max);

}