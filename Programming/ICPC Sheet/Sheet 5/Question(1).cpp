#include <iostream>
using namespace std;

int agrim (int a , int b){
    int x = a + b;
    return x;
}

int main() 
{
    int a,b;
    cin >> a >> b;
    cout << agrim (a,b);
    
}