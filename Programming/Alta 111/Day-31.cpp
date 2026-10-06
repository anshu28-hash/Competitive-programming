#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > mx){
            mx = arr[i];
        }

    }
    cout << "The Maximum Number Is: " <<mx <<endl;

}