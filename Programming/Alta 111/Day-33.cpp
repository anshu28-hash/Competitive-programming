#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int n = 3;

    bool sorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    cout << boolalpha << sorted;

    return 0;
}