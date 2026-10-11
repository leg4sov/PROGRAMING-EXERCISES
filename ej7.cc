
// Enunciado: Escribe un programa en C++ que lea una secuencia de números enteros estrictamente positivos 
//(mayores que 0). La secuencia termina con la marca de fin -1, el cual no forma parte de los datos a procesar

#include <iostream>
using namespace std;

int main () {

    int x;
    cin >> x;

    if (x == -1){
        cout << "secuencia vacia" << endl;
    }
    
    else {

    int num=0   ; 
    //si el programa podria incluir num negativos tmb pues en vez de compararlo con 0 lo comparrariamos con la primera entrada del cin
    //int num=x 

    while (x != -1){            // mira si x no es -1 (para ver si sigue la secuencia)

        if (x > num){           // para obtener el numeor mayor vamos a comarr todas las x entre si, asique si x es ayor que num la sustituye y la proxuma x se compara con num (la x anterior)

            num = x; 

        }

    cin >> x; 

    }

    cout << num << endl; 

    }
}