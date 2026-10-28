#include <iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    int num_bi;


    if ( num == 0){

        cout << num;
    }

    else {

        while ( num != 0){

         num_bi = num % 2;
         cout << num_bi;

         num = num / 2;

        }

    }

cout << endl;

}