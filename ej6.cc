//Enunciado: Escribe un programa en C++ que lea una secuencia de números enteros no negativos. 
//La secuencia termina con la marca de fin (centinela) -1, el cual no forma parte de 
//los datos a procesar.

#include <iostream>
using namespace std;

int main () {

    int x;
    cin >> x;

    if (x == -1){
        cout << "secuencia vacia" << endl;
    }
    
    else {

    double media = 0;
    int repetiones = 0;

        while (x != -1){

            repetiones = repetiones + 1;
            media = media + double(x);
            cin >> x;
            
        }
    
    media = media/repetiones;
    cout << media << endl;

    }



}
