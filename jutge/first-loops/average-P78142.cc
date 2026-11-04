#include <iostream>
using namespace std;

int main(){

    cout.precision (2);
    cout << fixed;  //para que solo sean dos decimales despues del punto

    double numeros;
    double media = 0;
    int cant_num = 0;


    while ( cin >> numeros){

        
        media = media + numeros;
    
        cant_num = cant_num + 1; //cantidad de numeros por la que se dividira

    }

    media = media / cant_num;

    cout << media << endl;

}