#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mn = INT_MAX;
    int pos = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] < mn){
            mn = arr[i];
            pos = i + 1;
        }
 
    }
    cout << mn << " " << pos <<endl;
 
}