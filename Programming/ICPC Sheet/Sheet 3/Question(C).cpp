#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size:";
    cin >> n;
    int arr[n];
    cout<<"Enter the array elements:";
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for (int i = 0 ; i < n ; i++){
        if(arr[i] > 0){
            arr[i] = 1;
        }
        else if (arr[i] < 0){
            arr[i] = 2;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";


}
