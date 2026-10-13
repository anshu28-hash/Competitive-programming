#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum = (-1) * sum;
    }
    else
    {
        sum = sum;
    }
 
    cout << sum << endl;
}