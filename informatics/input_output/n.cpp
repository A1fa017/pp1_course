#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int l = 45;
    int br2 = (n - 1) / 2;
    int br1 = (n - 1) - br2;
    int con = n * 45 + br1 * 5 + br2 * 15;
    int h = con / 60;
    int m = con % 60;

    cout << 9 + h << " " << m;

}