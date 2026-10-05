// Programa que te pide la hora : HH MM SS 
//le suma un segundo y te devuelve el resultado 

#include <iostream>
using namespace std;

int main () {

    int H, M, S;
    cout << "Introduzca Horas: ";
    cin >> H;

    cout << "Introduzca Minutos: ";
    cin >> M;

    cout << "Introduzca Segundos: ";
    cin >> S;

    S = S + 1;

if (S > 59){

    S = 0;
    M = M + 1;

    if (M > 59){

        M = 0;
        H = H + 1;
    
        if (H > 23){     // Ojo que las horas tienen que ir dentro de los minutos

            H = 0;
        }  
    }    
}

cout << H << "," << M << "," << S << "." << endl;


}