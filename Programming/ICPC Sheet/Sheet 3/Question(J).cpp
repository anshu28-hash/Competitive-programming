#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int mn = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < mn){
            mn = arr[i];
        }
 
    }
 
    int fq = 0;
    for(int i = 0 ; i < n ; i++){
        if (arr[i] == mn){
            fq++;
        }
    }
 
    if(fq % 2 != 0){
        cout << "Lucky\n";
    }
    else{
        cout << "Unlucky\n";
    }
}