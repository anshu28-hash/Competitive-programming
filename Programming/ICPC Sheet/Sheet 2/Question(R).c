#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while(n > 0){
        int x,y;
        cin >> x >> y;
        int start,end;
        if(x < y){
            start = x;
            end = y;
        }
        else{
            start = y;
            end = x;
        }
        int sum = 0;
        int i = start + 1;
        while (i < end){
            if (i % 2 != 0){
                sum = sum + i;
            }
            i++;
        }
        cout << sum << endl;
        n--;
        
    }
    
}