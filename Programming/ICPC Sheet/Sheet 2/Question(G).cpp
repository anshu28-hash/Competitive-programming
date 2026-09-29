#include <iostream>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        int n;
        cin >> n;
        long long fact = 1;
        for (int j = 1 ; j <= n ; j++){
            fact = fact * j;
        }
        cout << fact <<endl;
 
    }
}