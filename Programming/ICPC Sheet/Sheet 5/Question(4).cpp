#include <iostream>
using namespace std;

int prime (void){
    int n;
    int Prime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            Prime = 0;
            break; 
        }
    }
    if (Prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}

int main() {
    int n;
    cin >> n;
    cout << prime(n);

    

}