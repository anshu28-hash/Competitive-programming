#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int first = 1 + i * 4;
        cout << first << ' ' << first + 1 << ' ' << first + 2 << " PUM\n";
    }

}