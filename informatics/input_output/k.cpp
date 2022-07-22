#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h = n / 60;
    int m = n % 60;

    cout << h % 24 << " " << m << endl;
    
}