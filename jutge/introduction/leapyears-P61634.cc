#include <iostream>
using namespace std;

int main (){

 int año;
 cin >> año;

if( año % 100 == 0){

        if((año/100)%4==0){

            cout << "YES" << endl;
        }
        else if((año/100)%4!=0){

            cout << "NO" << endl;
        }
    }
    
else if( año % 4 == 0){

    cout << "YES" << endl;
 }

 else if(año % 4 != 0){

    cout << "NO" << endl;
 }


}