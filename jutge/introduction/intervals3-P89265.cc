#include <iostream>
using namespace std;

int main(){

    int a1, b1;
    cin >> a1 >> b1;

    int a2, b2;
    cin >> a2 >> b2;

    if( a1 == a2 && b1 == b2){

        cout << "= , [" << a1 << "," << b1 << "]" << endl;
    }
    
    else if(a1>=a2 && b1<=b2){ //in1 dentro de int2


        cout << "1 , [" << a1 << "," << b1 << "]" << endl;

    }

    else if(a1<=a2 && b1>=b2){ //in2 dentro de int1


        cout << "2 , [" << a2 << "," << b2 << "]" << endl;

    }

    else {

        cout << "? , [";

        if (a2>a1 && a2<=b1){

            cout << a2 << "," << b1 << "]" << endl;
        }
        else if (a1>a2 && a1<=b2){

            cout << a1 << "," << b2 << "]" << endl;
        }

        else{

            cout <<"]" << endl;
        }

    }
}