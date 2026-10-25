#include <iostream>
using namespace std;

int main (){

    int n;
    cin >> n;

    int mult;

    for(int i=1; i<=10; ++i){

        mult = i * n;
        cout << n << "*" << i << " = " << mult << endl;

    }

}