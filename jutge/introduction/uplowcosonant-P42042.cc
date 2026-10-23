#include <iostream>
using namespace std;

int main(){

    char x;
    cin >> x;

    if (x >= 97 && x <= 122){ //Si es minuscula

        cout << "lowercase" << endl;

        if ( x==97 || x==101 || x ==105 || x==111 || x==117 ){ //Asonanetes minusculas


            cout << "vowel" << endl;
        }
        else { //consonantes minusculas

            cout << "consonant" << endl;
        }

    }

    else if (x >= 65 && x <= 90){ //Si es mayusula 

        cout << "uppercase" << endl;

        if ( x==65 || x==69 || x ==73 || x==79 || x==85){ //Asonates mayusculas

            cout << "vowel" << endl;
        }
        else { // consonantes mayusculas

            cout << "consonant" << endl;
        }

    }


}