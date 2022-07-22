#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h = (n % 86400 - n % 3600) / 3600;
    int m = (n / 60) % 60;
    int m1 = m / 10;
    int m2 = m % 10;
    int s = n % 60;
    int s1 = s / 10;
    int s2 = s % 10;

    cout << h << ":" << m1 << m2 << ":" << s1 << s2;
}