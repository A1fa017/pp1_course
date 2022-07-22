#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    b = b % 10 + b / 100;

    cout << a + b;
}