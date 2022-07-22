#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    int gen_k = (a * 100 + b) * n;
    int r = gen_k / 100;
    int k = gen_k % 100;

    cout << r << " " << k;
}