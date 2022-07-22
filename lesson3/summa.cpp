#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int zhuzdik = n / 100;
    //cout << zhuzdik;
    int ondyk = (n / 10) % 10;
    //cout << ondyk;
    int birlik = n % 10;
    //cout << birlik;
    cout << zhuzdik + ondyk + birlik;
}