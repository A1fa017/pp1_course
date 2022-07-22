#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v, t;
    cin >> v >> t;

    int S = v * t;
    int point = S % 109;

    //cout << point;
    cout << (point + 109) % 109 << endl;
    
}