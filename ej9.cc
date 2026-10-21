/*
Enunciado: Escribe un programa en C++ que procese una secuencia de temperaturas (números enteros) que finaliza con la marca de fin -999 (centinela que no forma parte de los datos a procesar)4.

El programa debe calcular y mostrar por pantalla tres resultados:

La temperatura máxima registrada.
La temperatura media con decimales (double).
Un mensaje de detección: debe imprimir "Hay heladas" si existió al menos una temperatura bajo cero (< 0), o "Sin heladas" si todas fueron mayores o iguales a cero.


Caso límite (Secuencia vacía): Si el primer número introducido es directamente -999, el programa debe imprimir únicamente la frase: "Secuencia vacia".
*/

#include <iostream>
using namespace std;


int main () {

int temp;
cin >> temp;


int maxtemp = -998;
int repeticionbucle = 0;
double temp_suma = 0; 
bool nevada = false;
if (temp == -999) {

    cout << "Secuencia Vacia" << endl;
}

else {

    while (temp != -999) {


       if (maxtemp <= temp) { // para calcular tempreatura maxima 

            maxtemp = temp;
        }
        
    
    temp_suma = temp_suma + temp; // para calcular la media 

        if (temp < 0){

            nevada = true;
        }
       

    repeticionbucle = repeticionbucle + 1; // para calcular la media 
    cin >> temp; // aqui introducimos el proximo valor 

    }

int temp_media = double(temp_suma) / repeticionbucle;

if (nevada){
    cout << "Hay Heladas" << endl;
}

else if (!nevada){
    cout << "No hay Heladas" << endl;
}

        cout << "La Tempreatura maxima es: " << maxtemp << endl;
        cout << "La Temperatura media es: " << temp_media << endl;

    }
}

