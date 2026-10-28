#include <iostream>
using namespace std;

int main (){

    int num;
    cin >> num;

    int num_hex;
   
    if(num == 0) {

        cout << num;
    }

    else {

        while (num != 0){

        num_hex = num % 16 ;

            if( num_hex < 10 && num_hex >= 0 ){
            cout << num_hex;
            }

            else if( num_hex == 10){

                cout << "A";
            }
            else if( num_hex == 11){

                cout << "B";
            }
            else if( num_hex == 12){

                cout << "C";
            }
            else if( num_hex == 13){

                cout << "D";
            }
            else if( num_hex == 14){

                cout << "E";
            }
            else if( num_hex == 15){

                cout << "F";
            }

        num = num / 16;


         }
    }

    cout << endl;

}