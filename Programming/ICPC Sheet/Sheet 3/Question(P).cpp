#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

     int mn = INT_MAX;
    for(int i = 0;i<n ; i++){
        int count = 0;
        while(arr[i] % 2 == 0){
            count++;
            arr[i]/=2;
        }

        if (count < mn){
        mn = count;
        }

    }
    
    cout << mn << endl;
    
}