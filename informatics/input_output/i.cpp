#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h, d, s;
    h = n / 100;
    d = (n % 100) / 10;
    s = n % 10;

    cout << h + d + s;
    
}