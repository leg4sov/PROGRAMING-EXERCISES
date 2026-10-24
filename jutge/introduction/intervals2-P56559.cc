#include <iostream>
using namespace std;

int main (){

    int a1, b1; //intervalo 1
    cin >> a1 >> b1;

    int a2, b2; //intervalo 2
    cin >> a2 >>b2;

    if( a1 == a2 && b1 == b2){ //iguales

        cout << "=" << endl;

    }

    else if(a1>=a2 && b1<=b2){ //int1 dentro del int2

        cout << "1" << endl;
    }

    else if(a1<=a2 && b1>=b2){ //int2 dentro del int1

        cout << "2" << endl;
    }
    
    else{

        cout << "?" << endl;
    }


}