#include <iostream>
using namespace std;

int main() 
{
    int A,B;
    cout<<"Enter the number:";
    int r;
    cin >> A,B;
    for (int i=1; i<=A ; i++){
        if(A % i== 0 && B % i == 0){
            r = i;
        }

    }
    cout<<r<<endl;
}