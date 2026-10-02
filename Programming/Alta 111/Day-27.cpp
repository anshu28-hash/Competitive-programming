#include <iostream>
using namespace std;

int main() {
    
    int grid[3][3];
    int value = 1; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = value;
            value++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl; 
    }

}