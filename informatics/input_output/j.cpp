#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    cout << (2-(n % 2)) + n;
    
    int a = n + 1;
    cout << a;
}