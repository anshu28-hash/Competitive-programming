#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool Palindrome = true;
    
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            Palindrome = false;
            break;
        }
    }
    if (Palindrome)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

}