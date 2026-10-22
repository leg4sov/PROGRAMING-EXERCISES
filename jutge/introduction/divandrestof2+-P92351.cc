#include <iostream>
using namespace std;

int main (){

    int a, b;
    cin >> a >> b;

    int d, r;

    d = a / b;
    r = a % b;

    if (r < 0){

        r = r + b;
        d = d - 1;

        cout << d << " " << r << endl;

    }
    
    else {

        cout << d << " " << r << endl;

    }



}