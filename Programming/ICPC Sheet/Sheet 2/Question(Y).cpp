#include <iostream>
using namespace std;
 
int main() 
{
    int N;
    cin >> N;
    long long f = 0, sec = 1, nxt;
    for (int i = 1; i <= N; i++) {
        cout << f << " ";
        nxt = f + sec;
        f = sec;
        sec = nxt;
    }
    
}