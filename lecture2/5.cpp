#include <iostream>

using namespace std;

int main(){
    int a = 3;
    if(5 > 7){
        a = 4;
    }
    else if(4 % 2 == 1){
        a = 5;
    }
    else{
        a = 6;
    }
    cout << a;
}