#include <iostream>
using namespace std;

int main (){

    int x; //num que introducimos 
    cin >> x;

    int y = x;

    int num = 0;


    if( x == 0){

        cout << "The number of digits of " << x << " is " << 1 << "." << endl;
    }

    else {
    while(y != 0){

    num = num + 1;
    y =  y / 10;
    }

    cout << "The number of digits of " << x << " is " << num << "." << endl;
    }

}