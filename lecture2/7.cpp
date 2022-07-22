#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if(n % m == 0 or m % n == 0){
        int a;
        cin >> a;
        cout << a * 2;
    }
    else{
        cout << 0 << endl;
    }

    //cout << 0;
}