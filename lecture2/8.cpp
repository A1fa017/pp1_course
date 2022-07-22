#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){ // a > b or a == b
        if(a % 2 == 0){
            cout << a* 3;
        }
    }
    else if(a < b){
        cout << b;
    }
    else if(a == b){
        cout << a * 2;
    }
}