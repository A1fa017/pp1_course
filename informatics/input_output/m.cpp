#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int c = a;
    a = b;

    cout << a << " " << c;
}