#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        long long n;
        cin >> n;

        int count = 0;
        long long temp = n;

        while (temp > 0) {
            if (temp % 2 == 1) {
                count = count + 1;
            }
            temp = temp / 2;
        }

        long long ans = 0;
        long long value = 1;

        while (count > 0) {
            ans = ans + value;
            value = value * 2;
            count = count - 1;
        }

        cout << ans << endl;

        t = t - 1;
        
    }

}


// git init
// git add .
// git commit -m ""