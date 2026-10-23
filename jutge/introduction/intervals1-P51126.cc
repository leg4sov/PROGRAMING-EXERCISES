#include <iostream>
using namespace std;

int main() {

    int a, b; //intervalo 1 
    cin >> a >> b;

    int c, d; //intervalo 2
    cin >> c >> d;

    int ini, fin;

    if ( a == c && b == d){   //en caso de que sean iguales

        cout << "[" << a << "," << b << "]" << endl;
    }


    else if (a > d || c > b){ //en caso de que no coincidan

        cout << "[" << "]" << endl; 
    }

    else { //en caso de que haya una interseccion

        if ( a >= c ){

            ini = a;
        }
        else if ( c >= a ){

            ini = c;
        }

        if ( b <= d ){

            fin = b;
        }
        else if ( d <= b ){

            fin = d;
        }


        cout << "[" << ini << "," << fin << "]" << endl;

    }


}